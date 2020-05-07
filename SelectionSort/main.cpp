#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int raw[30];

void sort(int a[],int n){
	int i, j, temp, min;
	for(i=0;i<n-1;i++){
		min=i;
		for(j=i+1;j<n;j++){
			if(a[j]<a[min])
			  min=j;
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
		printf("\n");
		for(int i=0;i<30;i++)printf("%2d ",raw[i]);
	}
	
}

int main(void){
	srand(time(NULL));
	for(int i=0;i<30;i++)raw[i]=rand()%100;
	
	printf("before sort: \n");
	for(int i=0;i<30;i++)printf("%2d ",raw[i]);
	
	sort(raw, 30);
	
	printf("\nAfter sort:  \n");
	for(int i=0;i<30;i++)printf("%2d ",raw[i]);
}
