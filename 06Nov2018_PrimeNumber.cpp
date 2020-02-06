#include <stdio.h>

int main(){
  int i;
  for(i=2; i<101; i++){
    int j,flag=1;
    for(j=2; j<i; j++){
      if(!(i%j)) flag=0;
    }
    if(flag)
      printf("%2d is prime number\n", i);
  }
  return(0);
}
