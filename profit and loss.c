#include<stdio.h>
main(){
	float cp,sp,pl;
	printf("enter the cost price\n");
	scanf("%f",&cp);
	printf("enter the selling price\n");
	scanf("%f",&sp);
	if(sp>cp){
		printf("profit earned\n");
		pl=sp-cp;
	}
	else if(cp>sp){
		printf("loss occured:\n");
		pl=cp-sp;
	}
	else{
		printf("neither profit nor loss\n");
	}
	printf("%0.1f\n",pl);
	return 0;
}
