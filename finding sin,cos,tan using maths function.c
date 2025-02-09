#include<stdio.h>
#include<math.h>
int main(){
	float a= 30;
	float w,x,y,z;
	
	w=sin(a);
	x=cos(a);
	y=tan(a);
	z=pow(a,3);
	printf("%.2f\n %.2f \n%.2f \n%.2f\n",w,x,y,z);
	return 0;
	
}