#include <stdio.h>
#include <signal.h>

void do_sig(int m)
{

}

void mysleep(int n)
{
	signal(SIGALRM,do_sig);
	alarm(n);
	pause();
}

int main(void)
{
	struct sigaction act;
	
	//act.sa_handler = do_sig;
	act.sa_handler = SIG_DFL;
	sigemptyset(&act.sa_mask);
	act.sa_flags = 0;

	sigaction(SIGUSR1,&act,NULL);
	pause();

	return 0;
}
