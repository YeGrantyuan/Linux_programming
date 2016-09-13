#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	pid_t pc_fork,pr_wait;
	pc_fork = fork();
	if( pc_fork < 0)
	{
		perror("fork erro");
		exit (0);
	}
	//child process
	else if(pc_fork == 0)
	{
		sleep(5);	//child process puse 5 s
		printf("Child pid = %d\n",getpid());
		exit(1);	//child process exit usually
	}
	//parent process
	else{
		do {
			//use waitpid function & parent process NOBLOCK
			pr_wait = waitpid(pc_fork,NULL,WNOHANG);
			//if The child process not exit,The parent process pause 1 s
			if( pr_wait == 0 )
			{
				printf("The child process has not exit\n");
				sleep(1);
			}
		}
			while( pr_wait == 0);
			if(pr_wait == pc_fork )
			{
				printf("Get child process.The pid is %d,The pr_wait value is %d\n",getpid(),pr_wait);
			}else
			{
				perror("Other erro");
				exit(2);
			}
	}
	

	return 0;
}
