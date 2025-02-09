#include<stdio.h>
#define square(x) ((x)*(x))   // here square is the name of macro and it can be written in capital and small letter as well
int main()  // here ^^^^   expressing replaced when macro is called 
{
	int num;
	printf("enter a number for square :");
	scanf("%d",&num);
	printf("square of %d is = %d",num,square(num));
	return 0;
}