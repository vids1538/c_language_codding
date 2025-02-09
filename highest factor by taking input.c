#include<stdio.h>
int main()
{
	int i,hf,n;
	printf("enter a number =");
	scanf("%d\n",&n);
	hf=1;
	for (i=n/2;i>=1;i--){
	    if (n%2==0){
	    	hf=i;
	    	break ;
		}
	
	}
	printf("highest hcf of the number is %d",hf);
}