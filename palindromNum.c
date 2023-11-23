#include<stdio.h>
#include<string.h>
char palindrom(int num){
	int n=num;
	int p = 0;
    int temp;
	while(n>0){
		temp=n%10;
		p=p*10+temp;
		n=n/10;
	}

	if(p==num){
		printf("This NUmber is palindrom");
	}
	else{
		printf("Not Palindrom");
	}
	printf("%s",p);
}
int  main(){
    int num=1212;
//    printf("%s",name);
    palindrom(num);
    return 0;
}
