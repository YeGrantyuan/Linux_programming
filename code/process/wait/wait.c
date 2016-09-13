#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	pid_t fd,cd;
	fd = fork();
	if(fd > 0)
	{
		printf("This is parent process\n");
		if(cd = wait() < 0)
		printf("wait unsucess!\n");
	}
	else if(fd == 0)
	{
		printf("This is child process\n");
	}
	else {
		printf("fork failed\n");
		perror("fork erro");
		exit(0);
	}
	return 0;
}
