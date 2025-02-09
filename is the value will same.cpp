#include<stdio.h>
void printaddress(int *a);
int main()
{
	int a=5;
	printf("adress of a=%u\n",&a);
	printaddress(&a);
}
void printaddress(int *a){
	printf("value of a=%u",a);
//	int **r=&a;
	//printf("r=%u\n",r);
}