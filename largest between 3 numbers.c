#include<stdio.h>

main(){
	int a,b,c,big;
	printf("AYUSH KUMAR ROY & ROLL NI-25367\n");
	printf("enter three numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{if(a>c)
	      big=a;
	      else big=c;
	}
	else{
		if(b>c)
		big=b;
		else
		big=c;
	}
	printf("largest number is %d\n ",big);
	
	
	printf("enter three numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	big=a;
	if(b>a && b>c)
	big=b;
	if(c>a && c>b)
	big=c;
	printf("largest number is %d\n",big);
	return 0;
}
