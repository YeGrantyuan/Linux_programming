#include "../include/headH.h"

int main()
{
	int fd_pipe[2];
	/* create a pipe */
	if((pipe(fd_pipe)) < 0 )
	{
		Sys_error("create pipe error",1);
	}else{
		printf("pipe create sucess!\n");
	}

	/* close file dicreption */
	close(fd_pipe[0]); //read
	close(fd_pipe[1]); //write
}
