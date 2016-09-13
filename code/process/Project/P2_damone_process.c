#include <stdio.h>
#include "./Process.h"
#include <syslog.h>

#define MAXFILE 65536
static pid_t child1,child2;

void Child_Process_2(void);

void System_error(char *argv,int n)
{
	perror("argv");
	exit(n);
}
int main(void)
{
	static int i;
	child1 = fork();
	if(child1 == -1)
	{
		System_error("fork child1 error",1);
	}else if(child1 > 0)
		exit(0);
	openlog("exc2_info",LOG_PID,LOG_DAEMON);

	setsid();
	chdir("/");
	umask(0);
	for(i=0;i<MAXFILE;i++)
	{
		close(i);
	}

	Child_Process_2();
}

void Child_Process_2(void)
{
	child2 = fork();
	if(child2 < 0)
	{
		System_error("fork child2 error",2);
	}else if(child2 == 0)
	{
		syslog( LOG_INFO,"child2 will sleep for 10s " );
		sleep(10);
		syslog( LOG_INFO,"child2 is going to exit! " );
		exit(0);
	}
	else{
		waitpid( child2,NULL,0 );
		syslog(LOG_INFO,"child1 noticed that chil has exited!");
		closelog();
		while(1)
		{
			sleep(10);
		}
	}
}
