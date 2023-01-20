#include<stdio.h>

main(){
	int a,b,c;
	printf("AYUSH KUMAR ROY & ROLL NO-25367\n");
	printf("enter values\n");
	scanf("%d%d",&a,&b);
	printf("initial values \n a is %d\nb is %d\n",a,b);
	c=a;
	a=b;
	b=c;
	printf("after interchange\n");
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	



	
	printf("enter values:");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("first number is %d\n",a);
	printf("second number is %d\n",b);
	return 0;
}
