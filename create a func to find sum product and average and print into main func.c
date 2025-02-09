#include<stdio.h>
int  func(int *a,int *b,int *sum,int *product,int *average); // pass the value of sum, pro and average as parametre
int main(){
	int m; 
	printf("enter the value of n:");
	scanf("%d",&m);
	int n; 
	printf("enter the value of n:");
	scanf("%d",&n);
	int sum,product,average;
	func(&n,&m,&sum,&product,&average);  // passint the address of sum pro and ave 
	printf("sum=%d\n",sum);
	printf("product=%d\n",product);
	printf("average =%f\n",average);
	
	
}
int  func(int *a ,int *b,int *sum,int *product,int *average){      //recieving the value of sum, pro and average as parametre
	 *sum=*a+*b;
     *product=(*a)*(*b);
	*average=((*a)+(*b))/2;
	return func;
}