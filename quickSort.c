#include<stdio.h>
#include<time.h>
int partition(int arr[],int p,int r){
    int x=arr[r];
    int i=p-1; 
    int j;
    for(j=p;j<r;j++){
    	if(arr[j]<x){
    		i++;
    		int temp=arr[i];
    		arr[i]=arr[j];
    		arr[j]=temp;
		}
	}
	int temp2=arr[i+1];
	arr[i+1]=arr[r];
	arr[r]=temp2;
	return (i+1);
	
}


int QuickSort(int arr[], int p,int r){
if(p<r){

    int q=partition(arr,p,r);
    QuickSort(arr,p,q-1);
    QuickSort(arr,p+1,r);
}
}




int main(){
	clock_t start=clock();
    int arr[]={2,3,5,7,3,23,6,7,3};
    int len=sizeof(arr)/sizeof(int);
    int p=0;
    int r=len-1;

    QuickSort(arr,p,r);
    
    int i;
    for(i=0;i<len;i++){
    	printf("%d ",arr[i]);
	}
	clock_t end=clock();
	double execution=(double)(end-start)/CLOCKS_PER_SEC;
    printf("\nExecution time %f",execution);
	return 0;
    }

