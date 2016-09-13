#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <signal.h>
#include <sys/wait.h>
#include <sys/types.h>

pid_t pid;

void sys_erro(char *S)
{
	perror("");
	exit(1);
}

void do_sig_child(int signo)
{
	/*while( !(waitpid(0,NULL,WNOHANG) == -1) )
		;
		*/
	int status;

	while(waitpid(0,&status,WNOHANG) >0 );  //0表示回收同组的进程
	if(WIFEXITED(status))
		printf("child %d exit %d\n",pid, WIFEXITED(status));
	else if(WIFSIGNALED(status))
		printf("child %d cancle by signal %d \n",pid, WTERMSIG(status));
}

int main(void)
{
	pid_t pid;
	int i;
	//阻塞SIGCHID
	for(i = 0; i < 10; i++)
	{
		if ((pid = fork()) == 0)
		{
			break;
		}
		else if(pid < 0)
			sys_erro("fork");
	}

	if(pid == 0){
		int n = 18;
		while(n--){
			printf("chile ID %d\n",getpid());
			sleep(1);
		}
		return i;
	}
	else if(pid > 0){
		//先设置捕捉
		//再解除对SIGCHLD的阻塞
		struct sigaction act;

		act.sa_handler = do_sig_child;
		sigemptyset(&act.sa_mask);
		act.sa_flags = 0;
		sigaction(SIGCHLD,&act,NULL);

		while(1)
		{
			printf("Parent ID %d\n",getpid());
			sleep(1);
		}
	}
}
