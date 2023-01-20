#include<stdio.h>

main(){
	int i,n,m;
	printf("enter the value of n\n");
	scanf("%d",&n);
	for(i=1;i<=10;i++){
		m=n*i;
		printf("%dx%d=%d\n",n,i,m);
	}
	return 0;
}
