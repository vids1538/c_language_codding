#include<stdio.h>
int main(){
	// code to print factorail of a given number 
	int n;  //4=4*3*2*1
	printf("enter a number :");
	scanf("%d",&n);
	int i,product=1;
	for (i=1;i<=n;i++)
	{
		product=product*i;
	}
	printf("%d\n",product);
	return 0;	
}