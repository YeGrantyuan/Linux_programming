#include <stdio.h>
#include <pthread.h>

void *th_fun(void *arg)
{
	int *p = (int *)arg,i=0;
	printf("thread PID = %d\n",getpid());
	printf("thread ID = %x\n",(unsigned int)pthread_self());   //
	printf("*arg = %d\n",*p);
	while(1){
		i++;
		pthread_testcancel();
	}
}

int main(void)
{
	pthread_t tid;
	int n =10;

	pthread_create(&tid,NULL,th_fun,(void*)&n);
	printf("main thread ID = %x\n",(unsigned int)pthread_self());
	printf("main child thread ID = %x\n",(unsigned int)tid);
	printf("main PID = %d\n",getpid());
	pthread_cancel(tid);
	while(1)
	{
		sleep(2);
	}	
	return 0;
}
