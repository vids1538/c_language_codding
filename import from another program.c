#include<stdio.h>
#include "area.c"  // jis program ko point kar rhe h uska name inside""

int main()
{
	printf("\n%d\n",num);  //num =0
	increment();  // num =5  bcoz here num is incrementing by 5 
	num+=50;   // here num is 55 
	print();
}