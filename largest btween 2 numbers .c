#include<stdio.h>

main(){
	int a,b;
	printf("enter the numbers\n");
	scanf("%d%d",&a,&b);
	if(a>b){
		printf("%d is largest\n",a);
	}
	else if(a==b){
		printf("both are equal\n");
}
	else{
		printf("%d is largest\n",b);
	}
}
