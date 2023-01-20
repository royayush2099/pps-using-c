#include<stdio.h>
main(){
	int a;
	printf("AYUSH KUMAR ROY 7 ROLL NO-25367\n");
	printf("enter the  number\n");
	scanf("%d",&a);
	if(a>0){
		printf("%d is positive\n",a);
	}
	else if(a==0){
		printf("%d is niether positive nor negative\n",a);
	}
	else{
		printf("%d is negative",a);
	}
	return 0;
}
