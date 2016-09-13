#include "../include/headH.h"

int main()
{
	pid_t pid;
	int ret;

	//create a child process
	if((pid = fork()) < 0)
		Sys_error("fork error",1);
	//child process
	if(pid == 0 )
	{
		printf("This is child process");
		sleep(5);
		raise(SIGSTOP);
		//exit(0);
	}
	//In parent process:collect signal from child,using kill to deal
	else{
		printf("pid=%d\n",pid);
		if((waitpid(pid,NULL,WNOHANG)) == 0)  //WNOHANG：如果没有子进程了立即返回给wait。wait=0.成功。
		{
			sleep(1);
			if((ret = kill(pid,SIGKILL)) == 0)
				printf("kill %d\n",pid);
			else{
				Sys_error("kill",2);
			}
		}
	}
	
	return 0;
}
