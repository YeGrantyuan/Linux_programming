#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <string.h>

void sys_err(char *str,int exitno)
{
	perror(str);
	exit(exitno);
}

int main()
{
	int fd,fifoname;
	char buf[1024]="hello xwp\n";
	mkfifo("./myfifo",0777);
	fifoname = open("./myfifo",O_RDONLY);
	if(fifoname < 0){
		printf("myfifo created failed\n");
		exit(1);
	}
//	close(fifoname);

	fd = open("./myfifo",O_WRONLY);
	if(fd < 0)
		sys_err("open",1);

	write(fd,buf,strlen(buf));
	close(fd);
}
