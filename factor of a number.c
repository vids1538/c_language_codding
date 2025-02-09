#include<stdio.h>
int main()
{
	// program to find  factor of a number
	int hf=1,n;
	int i;
	printf("enter a number to find highest factor =");
	scanf("%d\n",&n);
	for(i=1;i<n-1;i++){
		if (n%i==0) hf=i;
	}  
	  printf("factor of this nnumber is %d",hf);
	  return 0;
}