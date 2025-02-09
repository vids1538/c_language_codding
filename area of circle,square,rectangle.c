#include<stdio.h>
float squarearea(float side)
{
		return side*side;
}
float circleArea(float radious)
{
	return 3.14*radious*radious;
}
float recArea(float a,float b){
		return a*b;
}
int add(int a,int b)
{
	return a+b;
}
int main()
{
	// code to calculate area of circle, rectangle,square
	printf("                               WELCOME\n");
	printf("_______________________________________________________________________\n");
	int a ;
	float rad;
	printf("enter a number :");
	scanf("%d",&a);
	
	float sq=squarearea(a);
	printf("the square of this number is %.2f\n",sq);
	
	printf("enter a radious of any circle : ");
	scanf("%f",&rad);
	
	float Area_of_circle=circleArea(rad);
	printf("the area of circle is %.2f\n",Area_of_circle);
	
	float len,bre;
	printf("enter length of rectangle : ");
	scanf("%f",&len);
	printf("enter breadth of rectangle : ");
	scanf("%f",&bre);
	printf(" the area of rectangle is %.2f",recArea(len,bre));
	//for adding two number 
	int a1,b;
	printf("enter first number ");
	scanf("%d",&a1);
	printf("enter first number ");
	scanf("%d",&b);
	int sum=add(a1,b);
	printf("the sum of that two number is %d",sum);
	
	
	
	
	return 0;
}
