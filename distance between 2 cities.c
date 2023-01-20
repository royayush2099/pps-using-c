#include<stdio.h>

main(){
	float km,m,cm,in,ft;
	printf("enter the distance between two cities in km\n");
	scanf("%f",&km);
	m=km*1000;
	cm=m*100;
	in=2.54*cm;
	ft=in/12;
	printf("%f\n%f\n%f\n%f\n",m,cm,in,ft);
}
