#include<stdio.h>

main(){
	float si,p,r,t;
	printf("AYUSH KUMAR ROY 7 ROLL NO-25367\n");
	printf("enter the principal , rate and time\n");
	scanf("%f%f%f",&p,&r,&t);
	si=(p*r*t)/100;
	printf("simple interest is %0.1f\n",si);
	return 0;
}
