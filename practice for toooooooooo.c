#include<stdio.h>

main(){
float a,b,c;
char ch;
printf("enter value of a and b\n");
scanf("%f%f",&a,&b);
printf("enter the operation you like to perform (+,-,*,/)\n");
fflush(stdin);
scanf("%c",&ch);
switch  (ch){
	case '+' : c=a+b;
	          break;
	case '-' : c=a-b;
	          break;
    case '*' : c=a*b;
              break;
    case '/' : c=a/b;
              break;
             // default:
             // 	printf("invalid choice\n");
            
}
printf("result : %f\n",c);

       
	return 0;
}
