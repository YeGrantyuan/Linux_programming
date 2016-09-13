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

	fd = open(argv[1],O_RDWR|O_CREAT,0777);
	if(fd < 0){
		sys_error("open",1);
	}

	if(lseek(fd,MAPLEN-1,SEEK_SET) < 0)
		sys_error("lseek",3);

	if(write(fd,"\0",1) < 0)
		sys_error("write",4);

	mm = mmap(NULL,MAPLEN,PROT_READ|PROT_WRITE,MAP_SHARED,fd,0);

	close(fd);

	if(mm == MAP_FAILED)
		sys_error("mmap",2);
	while(1){
		sprintf(mm,"hello%d\n",i++);
		sleep(1);
	}
	munmap(mm,MAPLEN);

	return 0;
}
