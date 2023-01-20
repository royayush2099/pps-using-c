#include<stdio.h>
#include<conio.h>

main(){
	int i,n,num1=0,num2=1,nextTerm;
	printf("AYUSH KUMAR ROY && ROLL NO.25367\n");
	printf("enter the number of terms:\n");
	scanf("%d",&n);
	printf("fibonacci series:\n");
	for(i=1;i<=n;++i){
		printf("%d, ", num1);
		nextTerm=num1+num2;
		num1 = num2;
		num2=nextTerm;
	}
	return 0;
}
