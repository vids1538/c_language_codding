#include<stdio.h>
int main()
{
	// take 3 input and find greatest among them 
	int a,b,c;
	printf("enter first number=");
	scanf("%d",&a);
	printf("enter second number=");
	scanf("%d",&b);
	printf("enter third number=");
	scanf("%d",&c);
	if (a<=b&&a<=c)
		printf("smallest number is %d",a);
	if (b<=c&&b<=a)
    	printf("smallest number is %d",b);	
//	else                    // this else is the part of above if that is in 14 no line if 14th number if condition fail then else part will definetely execute 
	if(c<a && c<b)
		printf("smallest number is %d",c);
	return 0;
	
}