#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <errno.h>

int main(void)
{
	int fd[2];
	char str[1024]="Hello itcast \n";
	char *buf[1024]={"Hello pipe \n"};

	if(pipe(fd) < 0 )
	{
		perror("");
		exit(1);
	}
	
	pid_t pid;
	pid = fork();
	//patents write child read
	if(pid > 0){
		//In the Pa close write;
		close(fd[0]);
		sleep(5);
		write(fd[1],str,strlen(str));
		close(fd[1]);
		wait(NULL);
	}
	else if(pid == 0){
		//In the Child close read;
		int len,flags;
		close(fd[1]);


		flags = fcntl(fd[0],F_GETFL);
		flags |= O_NONBLOCK;
		fcntl(fd[0],F_SETFL,flags);           //set 非阻塞
	
	tryagain:	

		len = read(fd[0],buf,sizeof(buf));

		if(len = -1){
			if(errno == EAGAIN){
				write(STDOUT_FILENO,"Try agan\n",10);
				sleep(1);
				goto tryagain;
			}
			else{
				perror("read failed");
				exit(1);		
			}
		}

		write(STDOUT_FILENO,buf,len);
		close(fd[0]);
	}
	else{
		perror("fork");
		exit(1);
	}

	return 0;
}
