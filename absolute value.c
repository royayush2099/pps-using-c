#include<stdio.h>

main(){
	int n;
	printf("enter a number\n");
	scanf("%d",&n);
	if (n<0)
	n=-1*n;
	printf("absolute value of a given number=%d\n",n);
	return 0;
}
