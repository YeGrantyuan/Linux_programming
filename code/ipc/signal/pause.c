#include <stdio.h>
#include <signal.h>

void do_sig(int n )
{

}

int main(void)
{
	struct sigaction act;

	act.sa_handler = do_sig;
	sigemptyset(&act.sa_mask);
	act.sa_flags = 0;

	sigaction(SIGUSR1,&act,NULL);

	pause();
	printf("Test pauseaction!\n");

	return 0;
}
