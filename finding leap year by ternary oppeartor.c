#include<stdio.h>
int main()
{
	// wap to check year is leap or not by taking year as input
	int y;
	printf("enter year=");
	(y%400==0 ||y%4==0 && y%100!=0)?printf("year is leap\n "):printf("year is leap\n ");
		return 0;
}