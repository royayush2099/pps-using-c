#include<stdio.h>
#include<string.h>

main(){
	printf("Ayush kumar roy csit-25367\n");
	 int r1,r2,r3,r4;
	  int r,n;
	printf("Enter the number\n");
	scanf("%d",&n);
	r1=n%10;
	n=n/10;
	r2=n%10;
	n=n/10;
	r3=n%10;
	n=n/10;
	r4=n%10;
	n=n/10;
	r=r1*10000+r2*1000+r3*100+r4*10+n*1;

	printf("reverse of given number is %d\n",r);

}
