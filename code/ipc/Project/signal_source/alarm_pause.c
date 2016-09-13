#include "../include/headH.h"

int main(void)
{
	int ret ,i;
		ret = alarm(5);
		printf("It will be pause\n");
		i = 0;
	while(1)
	{
		i++;
		printf("%d\t",i);
	}
		pause();
	printf("ERROER\n");
	/*
	while(i--)
	{
		printf("%d\t",i--);
	}
	*/
	return 0;

}
