#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int search(int a[],int n,int key){
	for(int i=0;i<n;i++){
		if(a[i]==key){
			return(i);
		}
	}
	return(-1);	// important! do not put this return(-1) inside loop.
}

int main(void){
	int a[30];
	int key=0,result=0;
	srand(time(NULL));
	for(int i=0;i<30;i++) a[i]=rand()%10;
	
	printf("·Q·j´M¦h¤Ö¡H");
	scanf("%d",&key);
	
	for(int i=0;i<30;i++) printf("%d ",a[i]);
	
	result=search(a,30,key);
	
	if(result==-1){
		printf("\nNo match");
	}
	else{
		printf("\nFound at %d",result);
	}
	return(0);
}

