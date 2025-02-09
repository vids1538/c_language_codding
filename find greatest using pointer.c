#include<stdio.h>
void greatest(int *a, int *b);
int main(){
	// program to find greatest number using pointer 
	int a,b;
	printf("enter first number :");
	scanf("%d",&a);
	printf("enter second number :");
	scanf("%d",&b);
	greatest(&a,&b);
}
void greatest(int *a, int *b){
	if ((*a)>(*b)){
		printf("a is greatest that is %d",*a);
	}
	else if ((*b)>(*a)) printf("b is greatest =%d",*b);
	else 
	    printf("value is equal");
}