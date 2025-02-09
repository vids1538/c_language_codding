#include<stdio.h>
int main()
{
	int num=34;
	int *addofnum=&num;
	int valofptr=*addofnum;
	printf("%d\n ",num);
	// if we want to print the address of num
	printf("%p\n ",&num);
	printf("%u\n",addofnum);
	printf("%d ",valofptr);
	
}