#include "../include/headH.h"

void my_sig_fun(int sign_no);

int main(void)
{
	printf("Waiting signal from keyboard\n");
	signal(SIGINT,my_sig_fun);
	signal(SIGQUIT,my_sig_fun);
	pause();
	return 0;
}

void my_sig_fun(int sign_no)
{
	if(sign_no == SIGINT)
		printf("Get signal \"SIGINT\"\n");
	else if(sign_no == SIGQUIT)
		printf("Get signal \"SIGQUIT\"");
}
