#include<stdio.h>

main(){
	int i,n,sum=0;
	printf("enter the value of n\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum=sum+i;
	}
	printf("sum is %d\n",sum);
}
