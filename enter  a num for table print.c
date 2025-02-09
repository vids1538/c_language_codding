#include<stdio.h>
int  table(int x){
	int i,mul;
	for (i=1;i<=10;i++)
	{   int mul=i*x;
		printf("\n%d\n ",mul);
	}
	
	return 1;
}
int main()
{
	int n;
	printf("enter a number for table :");
	scanf("%d",&n);
	table(n);
	//sumofTable(n);
}