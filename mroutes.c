#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <poll.h>
#include <pthread.h>

#define INFINITE_TIMEOUT -1

struct __route {
  pthread_t *pthr_send;
  pthread_t *pthr_recv;
  
  sockaddr_in *addr_from;
  sockaddr_in *addr_local_to; 
  int sockfd;
};

__route
*create_route(){
  __route *nr; /* new route */
  nr = malloc(sizeof(route));
  
  return nr;
}

int
local_exists(__route *r){
  if(r->addr_local_to)
}

void
wait_for_try(){
  
}

void
init_route_send_loop(__route *r){
  /* init transfer data betwin hosts */
  
}

void
init_route_recv_loop(__route *r){
  
}

void
main(){
  pthread_attr_t pthrs_attr;
  
  struct pollfd poll_fd;
  int main_sockfd;
  
  main_sockfd = socket(AF_INET, SOCK_STREAM, 0);
  listen(main_sockfd, /*this arg I don't know*/);
  
  pthread_attr_init(&pthrs_attr);
  
  int8_t stop = 0;
  while(!stop){
    __route *cr; /* current route */
    cr = create_route();
    
    poll_fd.fd = cr->sockfd;
    poll_fd.events = poll_fd.revents = 0;
    poll(&poll_fd, 1, INFINITE_TIMEOUT);
    if(poll_fd.revents ^ POLLIN)/** I think it's resolved with '^' \note can be other operand instead '&'*/
      continue;
    cr->sockfd = accept(main_sockfd, cr->addr_from);
    read
    
    pthread_create(cr->pthr_send, &pthrs_attr, 
      (*init_route_send_loop), cr);
    pthread_create(cr->pthr_recv, &pthrs_attr,
      (*init_route_recv_loop), cr);
  }
}
