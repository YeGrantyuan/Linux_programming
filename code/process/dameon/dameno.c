#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <wait.h>

#define MAXFILE 65535


void Dameon_application(void);

void Sys_error(char *argv,int n)
{
	perror("argv");
	exit(n);
}


int main(void)
{
	pid_t pc_fork;
	int i,fd,len;
//1.创建子进程
	pc_fork = fork();

	if(pc_fork < 0)
	{
		Sys_error("fork error",0);
	}
//2.退出父进程，子进程变成孤儿进程，调用setsid函数，改变孤儿进程属性
	else if(pc_fork > 0)
	{
		exit(1);
	}
	setsid();
//3.改变进程工作目录为根目录
	chdir("/");
//4.umask
	umask(0);
//5.关闭打开的文件描述符
	for(i=0;i<MAXFILE;i++)
	{	
		close(i);
	}
/* ************************************************************************** */
	/* 守护进程创建完毕，一下程序为守护进程工作 */
	
	while(1)
	{
		Dameon_application();	
	}
	
	return 0;
}

void Dameon_application(void)
{
	int fd,len;
	char *buff = "This is a Dameon\n";
	len = strlen(buff);

	if((fd = open("/tmp/dameon.log",O_WRONLY|O_CREAT|O_APPEND,0666)) < 0 )
		Sys_error("Open /tmp/dameon.log failed",3);
	write(fd,buff,len+1);
	close(fd);
	sleep(10);
}
