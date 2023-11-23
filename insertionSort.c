#include<stdio.h>


void inserttionsort(int arr[],int len){ 
int i;          //4,2,8,6,7,1,5
    for(i=1; i<=len;i++){
        int j=i-1;
        int value= arr[i];          
        while(arr[j]>value && j>=0){
                
                arr[j+1]=arr[j];
                j--;
            
        }
        arr[j+1]=value;
    }
    
    for(i=0;i<=len;i++){
    	printf("%d ",arr[i]);
}
}

int main(){
    int arr[]={4,27,34,34,34,76,86,9,6,7,1,5};
    int len =sizeof(arr)/sizeof(arr[0]);
    inserttionsort(arr,len);
   
    return 0;
}
