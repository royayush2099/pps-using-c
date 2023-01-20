#include<stdio.h>

main(){
	float a,b,c;
	printf("enter the values of a , b and c\n");
	scanf("%f%f%f",&a,&b,&c);
	a=a+b+c;
	b=a-b-c;
	c=a-b-c;
	a=a-b-c;
	printf("after interchange a is %0.1f  b is %0.1f and c is %0.1f",a,b,c);
	return 0;
}
