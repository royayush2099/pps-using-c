#include<stdio.h>

main(){
	long n,s=0,r1,r2,r3,r4;
	printf("enter a 5 digit number\n");
	scanf("%ld",&n);
	r1=n%10;
	s=s+r1;
	n=n/10;
	r2=n%10;
	n=n/10;
	r3=n%10;
	n=n/10;
	r4=n%10;
	n=n/10;
	s=n+r1+r2+r3+r4;
	printf("sum is %ld",s);
	return 0;
	
}
