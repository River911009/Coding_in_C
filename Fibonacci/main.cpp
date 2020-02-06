#include <stdio.h>
// 1 2 3 4 5 6 7
// 1 1 2 3 5 8 13
int main(){
  //variables defination
  long previous=1, answer=1, next=0;
  int  n=0;
  //title
  printf("To calculate Fibonacci,\n");
  printf("Please input n:");
  //procedure
  scanf("%d", &n);
  for(int i=2;i<=n;i++){
    next     = previous + answer;
    previous = answer;
    answer   = next;
  }
  //output
  printf("f(n)=%d\n", previous);
  return(0);
}
