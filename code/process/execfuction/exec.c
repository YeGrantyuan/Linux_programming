#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(void)
{
	char *argvv[]={"ls","-l",NULL};
	printf("hello\n");

	execl("/bin/bash/","ls","-l",NULL);
	execlp("ls","ls","-l",NULL);

	execle("/bin/bash","ls","-l","$PATH");

	return 0;
}
