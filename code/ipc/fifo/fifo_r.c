#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>

void sys_err(char *str,int exitno)
{
	perror(str);
	exit(exitno);
}

int main()
{
	int fd,len,fifoname;
	char buf[1024]="hello xwp\n";
	mkfifo("./myfifo",0777);
	fifoname = open("./myfifo",O_RDONLY);
	if(fifoname < 0){
		printf("myfifo created failed\n");
		exit(1);
	}
//	close(fifoname);

	fd = open("./myfifo",O_RDONLY);
	if(fd < 0)
		sys_err("open",1);

	len = read(fd,buf,sizeof(buf));
	write(STDOUT_FILENO,buf,len);	
	close(fd);

	return 0;
}
