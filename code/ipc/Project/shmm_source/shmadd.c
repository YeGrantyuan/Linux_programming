#include "../include/headH.h"

#define BUFSZ 2048

int main()
{
	int shmid;
	char *shmadd;
	//creat a share menmory
	if((shmid = shmget(IPC_PRIVATE,BUFSZ,0666)) < 0)
		Sys_error("create shmget error",1);
	else
	{
		printf("create share_memory successed: %d\n",shmid);
	}
	system("ipcs -m");
	//Mapping share memory //映射共享内存
	if((shmadd = shmat(shmid,0,0)) < (char *)0)
		Sys_error("shmat error",2);
	else
		printf("attatched shared-memory.\n");
	system("ipcs -m");
	//delete share memory
	if((shmdt(shmadd)) < 0)
		Sys_error("shmde error",3);
	else
		printf("delete share memory \n");
	system("ipcs -m");
	return 0;
}
