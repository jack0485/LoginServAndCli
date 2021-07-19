//
// Created by jack on 2021/7/12.
//

#ifndef MY_SERVER_MY_RECV_H
#define MY_SERVER_MY_RECV_H

#define BUFSIZE 1024
void my_err(const char * err_string, int line);
int my_recv(int connfd, char *data_buf, int len);

#endif //MY_SERVER_MY_RECV_H
