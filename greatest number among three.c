#include<stdio.h>
int main()
{
	// program to find greatest 
	int a ,b,c;
	printf("enter three number \n");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b&&a>c)
	{
		printf("the greatest number is %d",a);
	}
	else if (b>c)
	{
		printf(" the greatest no. is %d",b);
	}
	else
	printf(" the greatest no. is %d",c);
	return 0;
	
	
	
}