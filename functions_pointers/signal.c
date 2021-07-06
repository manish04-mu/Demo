#include<unistd.h>
#include<signal.h>
#include<stdio.h>
#include<stdlib.h>

void handler_for_int(int signo) {
  printf("You can't interrupt me\n");
}

int main() {
  printf("Welcome, pid = %d\n", getpid());
  signal(SIGINT, handler_for_int);
  while(1)
    pause();   
  return 0;
}