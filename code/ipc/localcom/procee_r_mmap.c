#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/mman.h>

#define MAPLEN 0x1000

void sys_error(char *str,int i)
{
	perror(str);
	exit(i);
}

int main(int argc,char *argv[])
{
	char *mm;
	int fd,i;
	if(argc < 2){
		sys_error("less filname",1);
	}

	fd = open(argv[1],O_RDWR);
	if(fd < 0){
		sys_error("open",1);
	}

	mm = mmap(NULL,MAPLEN,PROT_READ|PROT_WRITE,MAP_SHARED,fd,0);

	if(mm == MAP_FAILED)
		sys_error("mmap",2);
	while(1){
		printf("hello%s\n",mm);
		sleep(1);
	}
	munmap(mm,MAPLEN);

	return 0;
}
