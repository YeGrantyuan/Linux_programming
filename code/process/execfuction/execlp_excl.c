#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/* execlp 函数 中第一个参数是文件（此文件在环境变量中查找），第二个是要执行的命令名，如果   有第三个，则是后面的指令。最后一个一定是NULL，表示结束 */
int main()
{
	//creat a child process
	if(fork( ) == 0){
	//turn to execlp function 
		if(execl("/bin/ps","ps","-ef",NULL) > 0)
		{
			//以下程序不执行
			getchar();
			execlp("./fork","./fork",NULL);
		}
		else{	
			perror("execl error");
			exit(1);
		}
		//{
		//	perror("execl error");
		//	exit(2);
		//}
	}
	return 0;
}
