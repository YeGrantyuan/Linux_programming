#include <stdio.h>
#include <signal.h>

void do_sig(int num)
{
	int n = 5;
	while(n--){
	printf("I am num\n");
	sleep(1);
	printf("num = %d\n",num);
	}		
}

int main(void)
{
	struct sigaction act;
	act.sa_handler = do_sig;  //调用do_sig函数
//	act.sa_handler = SIG_IGN; //默认函数--SIG_IGN：忽略捕捉的
//	act.sa_handler = SIG_DFL; //默认函数--SIG_DFL：默认执行捕捉的信号
	
	sigemptyset(&act.sa_mask);
	sigaddset(&act.sa_mask,SIGQUIT);
	act.sa_flags = 0;

	sigaction(SIGINT,&act,NULL);

	while(1){
		printf("*************\n");
		sleep(1);
	}
	return 0;
}
