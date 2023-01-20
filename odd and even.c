#include<stdio.h>

main(){
	int a;
	printf("AYUSH KUMAR ROY 7 ROLL NO-25367\n");
	printf("enter the number\n");
	scanf("%d",&a);
	if( a>0 && a%2==0){
		printf("%d is even\n",a);
	}
    
	else{
		printf("%d is odd\n",a);
	}
	return 0;
}
