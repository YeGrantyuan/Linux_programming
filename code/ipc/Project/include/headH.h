#ifndef _HEADH_
#define _HEADH_

#include <time.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
void Sys_error(char *agrv,int n)
{
	perror("argv");
	exit(n);
}

#endif
