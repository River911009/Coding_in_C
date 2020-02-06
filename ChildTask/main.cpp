#include <stdio.h>
#include <unistd.h>

int main(){
  
  pid_t p=fork();

  if(p==0){
    for(int i=0;i<5;i++) printf("child\n");
  }
  if(p>0){
    for(int i=0;i<5;i++) printf("father\n");
  }

  return(0);
}
