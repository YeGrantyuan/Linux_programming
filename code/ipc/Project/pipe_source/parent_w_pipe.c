
/*******************************************************
                 Function statment                   

     This fucntion is create a pipe & then make parent 
 process communicate with chil process.

		parent write -> [pipe] -> child read


*******************************************************/

#include "../include/headH.h"
int main()
{
	pid_t pid_fork;
	int fd_pipe[2];
	char buf_r[100];
	char *buf_w = "Hello pipe!";
	char *p_w_buf;
	int r_num;
	memset(buf_r,0,sizeof(buf_r));

	pid_fork =fork();

	/*create pipe */
	if(pipe(fd_pipe[2]) < 0)
	{
		Sys_error("create pipe error",1);
	}

/*                     create child process                            */
	if(pid_fork<0)
	{
		Sys_error("fork error",2);
	}
//*                       child process                               *//
	else if(pid_fork  == 0 ) //child process
	{
		printf("\tIn child process:\n");
		if(close(fd_pipe[1]) == 0){
				printf("close child write sucess\n");
				sleep(2);
			}
		else
			Sys_error("close child write error",3);
	/* child read from parent */
		if((r_num = read(fd_pipe[0],buf_r,100)) > 0)
		{
			printf("%d numbers have already read from the pipe.\n\t\"%s\"",r_num,buf_r);
		}
		else{
			Sys_error("read error",5);
		}

	
		close(fd_pipe[0]);
		exit(1);
	}
/*                     parent process                                   */
	else if(pid_fork > 0){
		
		close(fd_pipe[0]);

		if(write(fd_pipe[1],"buf_w",sizeof(buf_w)) != -1)
		{
			printf("parent write1 sucess!\n");
		}

		if(write(fd_pipe[1],"buf_w",sizeof(buf_w)) != -1)
		{
			printf("parent write2 sucess!\n");
		}
		
		close(fd_pipe[1]);
		sleep(3);

		if((waitpid(pid_fork,NULL,0)) < 0)
		{
			Sys_error("waitpid error",4);
		}
		else{
			printf("child process has exit\n");
		}
	
		exit(1);
	}


	return 0;
}
