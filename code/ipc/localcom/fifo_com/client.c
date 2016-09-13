
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#include "protocl.h"

void sys_err(char *str)
{
	perror(str);
}

int main(void)
{
    int fd, fd_client;   //��������򿪹��йܵ���˽�йܵ����ļ�������
    int n;      //����������ֽ���
    char buf[MAXLINE];    //����һЩ����д���ն��ϵ���ʾ��Ϣ
    char name[MAXLINE];   //����ͻ����û���
    PROC proc_client;    //��װ��Э��

    printf("enter your user name(1 character): ");
    scanf("%s", name);

    /* ���÷���������׼���� */
    int flags = fcntl(STDIN_FILENO, F_GETFL, 0); 
    if (fcntl(STDIN_FILENO, F_SETFL, flags | O_NONBLOCK) < 0)
        sys_err("fcntl");

    if ((fd = open(SER_FIFO, O_WRONLY)) < 0)
        sys_err("open");

    /* ��¼ */

    proc_client.id = 1;
    strcpy(proc_client.src, name);

    write(fd, &proc_client, sizeof(proc_client));
    sleep(1);  //��֤������յ��Ժ���˽�йܵ�

    if ((fd_client = open(name ,O_RDONLY | O_NONBLOCK)) < 0)  //��������˽�йܵ�
        sys_err("open");

    while(1)
    {
        memset(&proc_client, 0, sizeof(PROC));

        if ((n = read(fd_client, &proc_client, MAXLINE)) > 0)
        {
            if (proc_client.id == 1 || proc_client.id == 3) {
                write(STDOUT_FILENO, proc_client.data, strlen(proc_client.data));
            }

            if (proc_client.id == 2) {

                memset(buf, 0, MAXLINE);
                sprintf(buf, "%s:%s", proc_client.src, proc_client.data);
                write(STDOUT_FILENO, buf, strlen(buf));
                memset(buf, 0, MAXLINE);
            }

            if (proc_client.id == 4) {
                write(STDOUT_FILENO, proc_client.data, strlen(proc_client.data));
                break;
            }

        }

        if ((n = read(STDIN_FILENO, buf, MAXLINE)) > 0) {
            if (strncmp(buf, "exit", 4) == 0)
            {
                proc_client.id = 4;
                strcpy(proc_client.src, name);
                write(fd, &proc_client, sizeof(PROC));
            }
            else   /* send message */
   {
                memset(&proc_client, 0, sizeof(PROC));
                proc_client.id = 2;
                strcpy(proc_client.src, name);
                strncpy(proc_client.dest, buf, 1);
                strcpy(proc_client.data, buf+2);

                write(fd, &proc_client, sizeof(PROC));
                memset(buf, 0, MAXLINE);
            }
        }

        sleep(1);
    }

    close(fd);
    close(fd_client);

    exit(0);
}

