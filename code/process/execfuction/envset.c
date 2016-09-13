#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	printf("PATH=%s\n",getenv("PATH"));
	setenv("PATH","New set PATH",1);
	printf("PATH=%s\n",getenv("PATH"));

	return 0;
}
