#include<stdio.h>

main(){
	float a,b,c,sum,perc;
	printf("Enter the marks of subject1 out of 100\n");
	scanf("%f",&a);
		printf("Enter the marks of subject2 out of 100\n");
		scanf("%f",&b);
			printf("Enter the marks of subject3 out of 100\n");
			scanf("%f",&c);
			perc = ((a+b+c)/300)*100;
	 if(perc<=33){
	 	printf("you are fail!\n");
	 	if(a<33 && b<33 && c<33){
	 		printf("you are fail in subject1 because you got %0.1f out of 100 which is less than 33\n",a);
	 		printf("you are fail in subject2 because you got %0.1f out of 100 which is less than 33\n",b);
	 		printf("you are fail in subject3 because you got %0.1f out of 100 which is less than 33\n",c);
	 		
		 }
}
	 else {
	 printf("you are pass\n");}
	 return 0;
}
