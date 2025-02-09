#include<stdio.h>
float addMarks (float *p)   // by doing same thingm using pointer
{ 
	float sum=0.0;  
	int i=0;
	for (i=0;i<5;i++)
	{
		sum=sum+sum[i];
	}
	return sum;
}
main()
{
	float marks[5]={90.5,87.8,67,89,96.2}; // array of student marks 
    float sum;
    sum=addMarks(marks);
    printf("%f",sum);
    return 0;
    
}