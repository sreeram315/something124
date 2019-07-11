#include <stdio.h> 
#include <sys/types.h> 

int main () {
  if(fork() || fork()){
  	printf("asd\n");
  	fork();
  }

  printf(". end\n");
}
