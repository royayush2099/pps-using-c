#include<stdio.h>

main(){
	int i,n,facto=1;
	printf("Ayush kumar roy csit-25367\n");
		printf("enter the value of n\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		facto=facto*i;
	}
	printf(" factorial of %d is %d\n",n,facto);
	return 0;
}
