#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int BinarySearch(int a[],int left,int right,int key){
	int middle=(left+right)/2;
	if(left>right){
		return(-1);
	}
	if(key==a[middle]){
		return(middle);
	}
	else{
		if(key>a[middle]){
			return(BinarySearch(a,middle+1,right,key));
		}
		else{
			return(BinarySearch(a,left,right-1,key));
		}
	}
}

void BubbleSort(int a[],int n){
	int temp;
	for(int i=1;i<n;i++){
		for(int j=n-1;j>=i;j--){
			if(a[j-1]>a[j]){
				temp=a[j-1];
				a[j-1]=a[j];
				a[j]=temp;
			}
		}
	}
}

int main(void){
	int a[30];
	int key=0,result=0;
	srand(time(NULL));
	for(int i=0;i<30;i++)a[i]=rand()%10;
	
	BubbleSort(a,30);

	printf("Search a number?");
	scanf("%d",&key);

	result=BinarySearch(a,0,29,key);

	for(int i=0;i<30;i++)printf("%2d ",a[i]);
	if(result==-1){
		printf("\nNo match");
	}
	else{
		printf("\nFound at %d",result);
	}
	return(0);
}

