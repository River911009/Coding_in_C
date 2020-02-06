#include <stdio.h>

float sqrt_(float input);

int main(){
  //
  float answer=0.0, input=0.0;
  //
  printf("input a number:");
  //
  scanf("%f", &input);
  answer=sqrt_(input);
  //
  printf("%.3f\n", answer);
  return(0);
}

float sqrt_(float input){
  float answer=0;
  while((answer*answer)<input){
    answer+=0.001;
  }
  return(answer-0.001);
}
