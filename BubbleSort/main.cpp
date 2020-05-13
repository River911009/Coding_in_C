#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int a[30];
int temp;

int main(void){
	srand(time(NULL));
	for(int i=0;i<30;i++)a[i]=rand()%100;
	
	printf("raw list:\n");
	for(int i=0;i<30;i++)printf("%2d ",a[i]);
	
	for(int i=1;i<30;i++){
		for(int j=30-1;j>=i;j--){
			if(a[j-1]>a[j]){
				temp=a[j-1];
				a[j-1]=a[j];
				a[j]=temp;
			}
		}
		printf("\n");
		for(int i=0;i<30;i++)printf("%2d ",a[i]);
	}
	
	printf("\nsorted list:\n");
	for(int i=0;i<30;i++)printf("%2d ",a[i]);
}

