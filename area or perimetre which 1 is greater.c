#include<stdio.h>
int main()
{
	int len, bredth;
	printf("enter length of rectangle :");
	scanf("%d",&len);
	printf("enter bredth of rectangle :");
	scanf("%d",&bredth);
	 int area =len*bredth;
	 int perimetre=2*(len+bredth);
	 printf("area is %d\n",len);
	 printf("perimetre is %d\n",perimetre);
	if (area>perimetre){
		printf("area is greater... ");}
	else{
		printf("area is not greater");
	}
	return 0;
	}