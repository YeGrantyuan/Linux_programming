#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	pid_t fork__exit;
	printf("Useing exit..... \n");
	printf("This is the connect int buff \n");
	fork__exit = fork();
	execlp("./_exit","_exit",NULL);
	exit(0);
}
