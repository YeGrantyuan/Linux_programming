#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/mman.h>

void sys_error(char *str,int i)
{
	perror(str);
	exit(i);
}

int main(void)
{
	int fd,len ;
	int *p;
	fd = open("./hello",O_RDWR);
	if(fd < 0)
	{
		sys_error("open failed",1);
	}
	
	len=lseek(fd,0,SEEK_END);

	p = mmap(NULL,len,PROT_READ|PROT_WRITE,MAP_SHARED,fd,0);
	if(p == MAP_FAILED){
		sys_error("mmap",1);
	}
	p[0] = 0x30313233;
	
	close(fd);

	munmap(p,len);




	return 0;
}
