#include<stdio.h>
float celtoFaren(float b){
    float f=((9*b)/5) +32;
	return f;
}
float farenTcel(float a){
	float d=(5*a-160)/9;
	return d;
}
int main()
{
	// code to change temperature from celcious to farenhiet
	// c/5=(f-32)/9
	printf("              welcome to temperature converter \n");
	printf("___________________________________________________________\n");
	printf("___________________________________________________________");
	int a=0,b=0;
	float c;
	printf("\n1.celcious to farenhiet press 1 :");
	scanf("%d",&a);
	
	printf("2. farenhiet to celcious  press 2 :");
	scanf("%d",&b);
	if (a==1)
	{
		printf("enter temperature in celcious :\n");
    	scanf("%f",&c);
    	float t=celtoFaren(c);
     	printf("%.2f",t);
    	
	}
	

	return 0;	
}
