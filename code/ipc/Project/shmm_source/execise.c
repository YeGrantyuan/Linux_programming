#include "headH.h"

#define BUSFSZ 2048

int main()
{
	int shmid, i, fd, nwrite, nread, sh_shmdt;
	char *shmadd;
	char buf[5];

	// create share memory
	shmid = shmget(IPC_PRIVATE, BUSFSZ, 0666);
	if(shmid < 0)
	{
		Sys_error("shmget error",1);
	}
	else
	{
		printf("creaing share memory: %d\n", shmid);
	}		

	// Mapping share memory
	shmadd = shmat(shmid, 0, 0);
	if((char *)shmadd == (char *)-1)
	{
		Sys_error("check errno", 2);
	}
	printf("Mapping memory successed!\n");
	
	shmadd = "Hello";
	
	fd = open("share", O_CREAT | O_RDWR, 0666);
	if(fd == -1)
	{
		Sys_error("open failed", 3);
	}
	printf("open successed!\n");

	nwrite = write(fd, shmadd, 5);
	if(nwrite == -1) 
	{
		Sys_error("write failed", 1);
	}
	printf("wrint successed\n");

	lseek(fd, 0, SEEK_SET);
	nread = read(fd, buf, 5);
	if(nread < 0)
	{
		Sys_error("nread",1);
	}
	else
	{
		printf("read %d from file: %s\n", nread,buf);
	}
	
	if((sh_shmdt =shmdt(shmadd))< 0)
	{
		Sys_error("shmdt error",1);
	}
	else
	{
		printf("delete share memory successed\n");
	}
	
	return 0;
}
