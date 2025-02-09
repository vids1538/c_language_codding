#include<stdio.h>
int main()
{
	// print the geometrical propgration 3,12,48..nth
	int i,n;
	printf("enter n=");
	scanf("%d",n);
	for(i=3;i<=n;i++){
		printf("%d",i);
		i=i*4;
	}
}