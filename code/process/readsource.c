#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

int main(void)
{
	int fd , i, j;
	char *buf[1024000];

	if((fd = open("./env.c",O_RDONLY,0666)) < 0)
	{
		perror("");
		exit(1);
	}else{
		i=read(fd,"./env.c",strlen("./env.c"));
		j=write(i,buf[1024000],strlen("./env.c"));
		printf("%s\n",buf);
	}

	return 0;
}
