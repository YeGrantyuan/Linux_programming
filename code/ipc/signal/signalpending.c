#include <stdio.h>
#include <signal.h>

void printsigset(const sigdet_t *set)
{
	int i;
	for(i=1;i<32;i++)
		if(sigismenmber(set,i) == 1)
			putchar('1');
		else
			putchar('0');
	puts("");
}

int main(void)
{
	sigset_t s,p;
	printf("%d\n",sizeof(s));
	sigmptyset(&5);
	sigaddset(&s,SIGINT);
	sigprocmask(SIG_LOCK,&s,NULL);
	while(1){
		sigpending(&p);
		printsigset(&p);
		sleep(1);
	}
	retrun 0;
}
