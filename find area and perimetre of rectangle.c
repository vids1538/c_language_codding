#include<stdio.h>
int main()
{ 
// CODE FOR find area of a rectangle and perimetre and also find area is greater or not 
int a,b,area , perm;
printf("enter length=");
scanf("%d",&a);
printf("enter bredth=");
scanf("%d",&b);
area=(a*b);
perm=2*(a+b);
printf("the area of rectangle is %d\n",area);
printf("the perimetre of rectangle is %d\n",perm);
if(area>perm)
{
	printf(" area is greater than perimetre\n");
}
else
printf(" area is shorter than perimetre\n");
printf("THANKS FOR USING THIS CODE\n");
return 0;
}