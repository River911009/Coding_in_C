#include <stdio.h>
// 0 1 2 3 4  5
// 1 1 2 6 24 120
int main(){
  //variables defination
  int  answer=1, n=0;
  //title
  printf("To calculate Factorial,\n");
  printf("Please input n:");
  //procedure
  scanf("%d", &n);
  while(n>0){
    answer*=n--;
  }
  //output
  printf("f(n)=%d\n", answer);
  return(0);
}
