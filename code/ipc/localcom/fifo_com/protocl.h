
#ifndef __PROTOCL__
#define __PROTOCL__

typedef struct _PROTOCL
{
    int     id; 
    char    src[4];
    char    dest[4];
    char    data[1024];
}PROC;

void sys_err(char *); 

#define MAXLINE 1024
#define SER_FIFO "SER_FIFO"
#define CONNECT "\
###################################################\n\
# you have connect with the server successfully!  #\n\
# use format<user:message> to send message        #\n\
# use <exit> to exit                              #\n\
###################################################\n"

#endif
