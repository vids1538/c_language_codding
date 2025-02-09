#include<stdio.h>
int main()
{
	// code for calculator using switch case 
	char ch;
	int a,b;
	printf("enter operator (+,-,*,/)=");
	scanf("%c",&ch);
	printf("enter first number =");
	scanf("%d",&a);
	printf("enter second no =");
	scanf("%d",&b);
	switch (ch){    // while using switch case not use semicolon ;
	  case '+':
	  	printf("the addition is %d",a+b);
	  	break;  // this break statement used for breaking the execution if the condition is true
	  case '-':
	  	printf("the subtraction is %d",a-b);
	  	break;
	  case '*':
	  	printf("the multiplication is %d",a*b);
	  	break;
	  case '/':
	  	printf("the division is %d",a/b);
	  	break;
	  default :
	  	printf("invalid operator");  	
	}
	return 0;	
}