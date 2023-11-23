#include<stdio.h>

int BubbleSort(int *arr, int len){
    int i;
    
    for(i=0;i<len-1; i++){
    	
    	//0 1 
    	int ptr=0;
    	
    	while(ptr<len-1){    // 
		
    		if(arr[ptr]>arr[ptr+1]){
			
                int temp=arr[ptr];
                arr[ptr]=arr[ptr+1];
                arr[ptr+1]=temp;
			}
			ptr++;    // 0 1  
	
		}
    	
	}
	
}






int main(){
    int i=0;
    int arr[]={30,53,3,3,22,67,2,89,98};
    int len = sizeof(arr)/sizeof(arr[0]);
    BubbleSort(&arr,len);
    for(i=0;i<len;i++){
        	printf("%d ",arr[i]);
   		 }
    
    return 0;
}
