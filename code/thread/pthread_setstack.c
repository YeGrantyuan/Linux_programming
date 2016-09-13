#include <stdio.h>
#include <pthread.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 0x100000

int print_ntime(char *str)
{
	printf("%s",str);
	sleep(1);
	return 0;
}

void *th_fun(void *arg)
{
	int n = 3;
	while(n--)
		print_ntime("hello wxp\n");
}

int main(void)
{
	pthread_t tid;
	int err,detachstate;
	pthread_attr_t attr;
	size_t stacksize;
	void *stackaddr;

	pthread_attr_init(&attr);

	pthread_attr_getstack(&attr,&stackaddr,&stacksize);
	printf("stackaddr=%p\n",stackaddr);
	printf("stacksize=%x\n",(int)stacksize);

	pthread_attr_getdetachstate(&attr,&detachstate);
	if(detachstate == PTHREAD_CREATE_DETACHED)
		printf("thread detached\n");
	else if(detachstate == PTHREAD_CREATE_JOINABLE)
		printf("thread join\n");
	else
		printf("thread un known");

	while(1){
	
	/*设置内存分离属性*/
	pthread_attr_setdetachstate(&attr,PTHREAD_CREATE_DETACHED);
	/*在堆中申请内存，指定线程的起始地址和大小*/
	stackaddr = malloc(0x100000);
	if(stackaddr == NULL)
	{
		perror("malloc");
		exit(1);
	}
	stacksize = 0x100000;
	pthread_attr_setdetachstate("&attr,stackaddr,stacksize");
	
	

	err = pthread_create(&tid,&attr,th_fun,NULL);
	if(err != 0)
	{
		printf("%s\n",strerror(err));
		exit(1);
	}
	pthread_join(tid,NULL);
	
	}

	pthread_attr_destroy(&attr);

	return 0;
}
