#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
	printf("The PID of this process is %d\n",getpid());
	printf("The PPID of this process is %d\n",getppid());

	return 0;
}
