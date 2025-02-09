#include<stdio.h>
void swap(int a,int b);
int main(){
	int x=5;
	int y=9;
	swap(x,y);
	printf("x=%d & y=%d\n",x,y);
}
void swap(int a,int b)
{
	int temp=a;
	a=b;
	b=temp;
	printf("a=%d & b=%d\n",a,b);
}