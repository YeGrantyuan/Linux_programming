#include <signal.h>
#include <stdio.h>

//打印未决信号集里面的信号情况
void printsigset(const sigset_t *set)
{
	int i;
	for(i=1;i<32;i++)
		if(sigismember(set,1) == 1)
			putchar('1');
		else
			putchar('0');
	puts("");
}

int main(void)
{
	sigset_t s,p;
	sigemptyset(&s);
	sigaddset(&s,SIGINT);
	sigprocmask(SIG_BLOCK,&s,NULL);
	while(1){
		sigpending(&p);
		printsigset(&p);
		sleep(1);
	}

	return 0;
}
