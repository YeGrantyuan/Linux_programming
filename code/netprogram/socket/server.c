#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>

int main(void)
{
	struct sockaddr_in serveraddr,clientaddr;
	int sockfd;

	//1.socket
	sockfd = socket(AF_INET,SOCK_STREAM,0);
	//2.blind
	bzero(&serveraddr,sizeof(serveraddr));
	//地址族协议
	serveraddr,sin_family = AF_INET;
	//IP 地址
	serveraddr.sin_addr.s_addr = htonl(INADDR_ANY);
	serveraddr.sin_port = htons(SERVER_PORT);
	blind(sockfd,(struct sockaddr *)&serveraddr,sizeof(serveraddr));
	//;isten
	listen(sockfd,512);
	//4.accept阻塞监听客户链接请求
	addrlen = sizeof(clientaddr);
	confd = accept();
}
