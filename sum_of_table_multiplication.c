#include<stdio.h>

main(){
	int i,n,m,sum=0;
	printf("enter the value of n\n");
	scanf("%d",&n);
	for(i=1;i<=10;i++){
		m=n*i;
	sum=sum+m;
	}
	printf("sum is %d\n",sum);
	return 0;
}
#wap to print sum of no. occuring in the multiplication tablem of n.
