#include<stdio.h>
#include<time.h>


int main(){
	clock_t start=clock();
    int arr[]={6,3,7,2,5,2,3,1,0,8,5,};
    int max=7;
    int i,j,l,m;
    int len=sizeof(arr)/sizeof(int);
	

    int count[max+1];
    
    int arr2[len];
//    printf("start time = %d");
    
    for(i=0; i<=max;i++){
        count[i]=0;
    }
    
    //print count array
    for(i=0;i<=max;i++){
		printf("%d ",count[i]);
	}
	printf("\n");
	for(i=0;i<len;i++){
		count[arr[i]]++;
	}
	
	//print count array
    for(i=0;i<=max;i++){
		printf("%d ",count[i]);
	}

	printf("\n");
    
    int index=0;
    for(i=0;i<=max;i++){
    	while(count[i]>0){
    		arr2[index]=i;
    		index++;
    		count[i]--;
		}
	}

	
    for(i=0;i<len;i++){
        printf("%d ",arr2[i]);
    }
    
    clock_t end=clock();
    
    double execution=(double)(end-start)/CLOCKS_PER_SEC;
    printf("\nExecution time %f",execution);
    return 0;
}
