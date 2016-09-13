#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int fd[2];

	pipe(fd);
	printf("pipe buf %ld\n",fpathconf(fd[0],_PC_PIPE_BUF));
	printf("%ld\n",fpathconf(STDOUT_FILENO,_PC_NAME_MAX));
	printf("%ld\n",pathconf("hello",_PC_NAME_MAX));

	getchar();


	return 0;
}
