#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>
#include <sys/wait.h>

static	pid_t child,child1,child2;

void Child_1(void);
void Child_2(void);
void Parent_process(void);
void wait_perror(void);
void Sys_erro(char *argv,int n);

int main(void)
{

	child1 = fork();
	child2 = fork();

	/* Deal Child1 function */
	if(child1 < 0 )
	{
		Sys_erro("child fork errro",1);
	}	
	else if(child1 == 0)
	{
		printf("Child_1 Process do excelp_function\n");
		if((execlp("ls","-l",NULL)) < 0)
			Sys_erro("excelp errro",2);
	}
	/* Deal Child2 function */

	if(child2 < 0 )
	{
		Sys_erro("child fork errro",1);
	}	
	else if(child2 == 0)
	{
		printf("Child_2 Process sleep 5s ,& wait parent_process do waitfunction\n");
		sleep(5);
		printf("Sleep over.Exit\n");
		exit(0);
	}
	/* Parent_process wait for Child_2 */
	if(child2 > 0)
	{
		printf("This is parent_process\n");
		do{
			child = waitpid( child2,NULL,WNOHANG);
			if(child == 0)  //阻塞父进程，等待子进程退出
			{
				printf("Child_2_process has not exit\t still wait!\n");
				sleep(1);
			}
		}while( child == 0 );
		if( child == child2 )//wait的返回值=child2的进程号，回收child2
			printf("Child2_process has already exit \t Get child2\n");
		else
			printf("wait_perror()");
	}





}

void wait_perror(void)
{
	Sys_erro("wait erro",3);
}

void Sys_erro(char *argv,int n)
{
	perror("argv");
	exit(n);
}
