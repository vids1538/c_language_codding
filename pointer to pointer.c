#include<stdio.h>
int main(){
	int a=5;
	int *p=&a;  // p is the pointer and store the address of a
	int **q=&p;  // q is another pointer which store the address of pointer p 
	printf("a=%d",*(*q));// a=5  because 
}