#include<stdio.h>

main(){
	float f,c;
	printf("enter temperature in c\n");
	scanf("%f",&c);
	f=((9*c)/5)+32;
	printf("temperature in f is %f",f);
	return 0;
}
