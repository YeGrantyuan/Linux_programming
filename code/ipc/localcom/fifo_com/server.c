
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>

#include "protocl.h"
#include "list.h"


int main(void)
{
    int status;   //判断创建公有管道是否成功
    int fd;     //打开公有管道的文件描述符
    int n;      //用以保存读到的字节数
    int fd_client; //打开私有管道的文件描述符
    char name[MAXLINE] = {0};   //保存客户端名
    char buf[MAXLINE] = {0};    //用以存放要写入管道或终端的提示信息
    PROC proc;          //协议，数据量大可以用堆

    struct list *ls = create_list();   //创建链表，维护登录用户名列表

    if ((status = mkfifo(SER_FIFO, 0644)) < 0)
        sys_err("mkfifo server");
    if ((fd = open(SER_FIFO, O_RDONLY)) < 0)
        sys_err("open SER_FIFO");

    while(1) {
        if ((n = read(fd, &proc, sizeof(PROC))) > 0) {
            if (proc.id == 1) {     //收到的是登录包

                insert_list(ls, 0, proc.src);  //插入到登录列表

                sprintf(buf, "%s is login\n", proc.src);
                write(STDOUT_FILENO, buf, strlen(buf));

                if (mkfifo(proc.src, 0644) < 0) //为登录用户创建私有会话管道
                    sys_err("mkfifo client");
                if ((fd_client = open(proc.src, O_WRONLY)) < 0)
                    sys_err("open client fifo");

                /* 给客户发送1号回执包，告诉登录成功 */
                memset(&proc, 0, sizeof(PROC));
                proc.id = 1;
                strcpy(proc.data, CONNECT);

                write(fd_client, &proc, sizeof(PROC));
                close(fd_client);
            }

            if (proc.id == 2) {    //会话包，转发
                if ((fd_client = open(proc.dest, O_WRONLY)) < 0) {
                    if (errno == 2) { //没有这个文件，用户不在线
                        fd_client = open(proc.src, O_WRONLY);

                        memset(&proc, 0, sizeof(PROC));
                        proc.id = 3;  //向发送端回发3号包 ，提示用户不在线
                        strcpy(proc.data, "the user is offline\n");
                        write(fd_client, &proc, sizeof(PROC));
                        close(fd_client);
                    }
                    else {
                        sys_err("open fd_client");
                    }
                }

                write(fd_client, &proc, sizeof(PROC));
                close(fd_client);
            }

            if (proc.id == 4) {                     //退出登录包
                fd_client = open(proc.src, O_WRONLY);

            //  memset(&proc, 0, sizeof(PROC));
                proc.id = 4;
                strcpy(proc.data, "exit success\n");
                write(fd_client, &proc, sizeof(PROC));
                close(fd_client);
                unlink(proc.src);

                sprintf(buf, "%s is logout\n", proc.src);
                write(STDOUT_FILENO, buf, strlen(buf));

                delete_node(ls, proc.src);
                traverse(ls);

                if (empty_list(ls) == 0)
                    break;
            }
        }
    }

    free(ls);
    close(fd);
    unlink(SER_FIFO);

    exit(0);
}

