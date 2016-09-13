#include "../include/headH.h"

#define BUFSZ 512

struct message{
	long msg_type;
	char msg_text[BUFSZ];
};

int main()
{
	int qid;
	key_t key;
	int len;
	struct message msg;
	//根据不同的路径和关键表示产生标准的key
	if((key = ftok(".",'a')) == -1)
		Sys_error("ftok",1);
	//创建消息列队
	if((qid = msgget(key,IPC_CREAT|666)) == -1)
		Sys_error("msgget error",2);
	printf("open queue %d\n",qid);
	puts("Please enter the messag to the queue:\n");
	if((fgets((&msg) -> msg_text,BUFSZ,stdin)) == NULL)
	{
		puts("no message\n");
		exit(4);
	}
	msg.msg_type = getpid();
	len = strlen(msg.msg_text);
	//添加消息到消息列队
	if((msgsnd(qid,&msg,len,0)) < 0)
		Sys_error("message posted",5);
	//读取消息列队
	if(msgrcv(qid,&msg,BUFSZ,0,0) < 0)
		Sys_error("msgrcv error",6);
	printf("message is:%s\n",(&msg) -> msg_text);
	//从系统内核中移走消息列队
	if((msgctl(qid,IPC_RMID,NULL)) < 0)
		Sys_error("msgctl",7);
	return 0;
}
