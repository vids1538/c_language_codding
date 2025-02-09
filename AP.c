#include<stdio.h>
int main()
{
	int n ,i;
	printf("enter your nth term=");
	scanf("%d",&n);
	for(i=4;i<n*2-1;i=i+3)
	printf("%d ",i);
}