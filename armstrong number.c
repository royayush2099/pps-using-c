#include<stdio.h>
#include<conio.h>

main(){
	int	n,r,sum=0,temp,z;
	printf("AYUSH KUKMAR ROY & ROLL NO.25367\n");
	
	printf("enter the number\n");
	scanf("%d",&n);
	temp=n;
	while(n>0){
		r=n%10;
		n=n/10;
		sum=r*r*r;
		z=z+sum;
	}
	if(temp==z){
		printf("armstrong no.\n");
	}
	else
	printf("not  a armstrong no.\n");
	return 0;
	 
}
