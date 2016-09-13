
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
    int status;   //�жϴ������йܵ��Ƿ�ɹ�
    int fd;     //�򿪹��йܵ����ļ�������
    int n;      //���Ա���������ֽ���
    int fd_client; //��˽�йܵ����ļ�������
    char name[MAXLINE] = {0};   //����ͻ�����
    char buf[MAXLINE] = {0};    //���Դ��Ҫд��ܵ����ն˵���ʾ��Ϣ
    PROC proc;          //Э�飬������������ö�

    struct list *ls = create_list();   //��������ά����¼�û����б�

    if ((status = mkfifo(SER_FIFO, 0644)) < 0)
        sys_err("mkfifo server");
    if ((fd = open(SER_FIFO, O_RDONLY)) < 0)
        sys_err("open SER_FIFO");

    while(1) {
        if ((n = read(fd, &proc, sizeof(PROC))) > 0) {
            if (proc.id == 1) {     //�յ����ǵ�¼��

                insert_list(ls, 0, proc.src);  //���뵽��¼�б�

                sprintf(buf, "%s is login\n", proc.src);
                write(STDOUT_FILENO, buf, strlen(buf));

                if (mkfifo(proc.src, 0644) < 0) //Ϊ��¼�û�����˽�лỰ�ܵ�
                    sys_err("mkfifo client");
                if ((fd_client = open(proc.src, O_WRONLY)) < 0)
                    sys_err("open client fifo");

                /* ���ͻ�����1�Ż�ִ�������ߵ�¼�ɹ� */
                memset(&proc, 0, sizeof(PROC));
                proc.id = 1;
                strcpy(proc.data, CONNECT);

                write(fd_client, &proc, sizeof(PROC));
                close(fd_client);
            }

            if (proc.id == 2) {    //�Ự����ת��
                if ((fd_client = open(proc.dest, O_WRONLY)) < 0) {
                    if (errno == 2) { //û������ļ����û�������
                        fd_client = open(proc.src, O_WRONLY);

                        memset(&proc, 0, sizeof(PROC));
                        proc.id = 3;  //���Ͷ˻ط�3�Ű� ����ʾ�û�������
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

            if (proc.id == 4) {                     //�˳���¼��
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

