#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void p_error(char *argv, int n)
{
	perror("argv");
	exit(n);
}

int main(void)
{
	int n;
	pid_t result;
	result = fork();
		if(result == -1)
		{
			p_error("fork",0);
		}
		else if(result == 0 )
		{
			printf("This is the child process,pid is %dppid is %d\n",getpid(),getppid());
		}
		else{
			printf("This is parent process,pid is %d\n",getpid());
		}
		printf("The value of result = %d\n",result);

	return 0;
}
