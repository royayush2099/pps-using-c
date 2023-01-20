#include<stdio.h>


main(){
	
	//what will be the date of that year means first day 1 january //
int yr,ld,nd; //year, leap days, numbe of days//
long td,tot; //total days//
printf("enter year\n");
scanf("%d",&yr);
td=(yr-1)*365;
ld=(yr-1)/4-(yr-1)/100+(yr-1/400);
tot=td+ld;
nd=tot%7;
if(nd==0)
	printf("monday");
	else if(nd==1) printf("tuesday\n");
	else if(nd==2) printf("wednesday\n");
	else if(nd==3) printf("thursday\n");
	else if(nd==4) printf("friday\n");
	else if(nd==5) printf("saturday\n");
	else printf("sunday\n");
	return 0;

	
}
