#include<stdio.h>

main(){
	int i,n;
		printf("enter the value of n\n");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++){
		if(n%i==0){
			printf("%d is prime\n",n);
			break;
		}
		else if(n%i!=0){
		
		printf("%d is not prime\n",n);}
		break;
	}
	return 0;
}
