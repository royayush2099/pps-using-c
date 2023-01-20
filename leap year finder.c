#include<stdio.h>

main(){
	int yr;
	printf("enter year\n");/*logic for leap year is that for centuries divide by 400 and for normal year divide by 4 */
	scanf("%d",&yr);
	if((yr%100==0 && yr%400==0) || (yr%100!=0 && yr%4==0))
	printf("%d is a leap year\n",yr);
	else
	printf("%d is not a leap year\n");
	return 0;
} 
