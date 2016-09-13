#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int count;
	alarm(1);
	for(count=0;1;count++)
		printf("count=%d  ",count);

	return 0;
}
