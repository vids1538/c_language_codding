#include<stdio.h>
int main(){
	// wap to enter three item and calculate final cost with gst18%
	int item[3];
	printf("enter price of first item");
	scanf("%d",&item[0]);
	
	printf("enter price of first item");
	scanf("%d",&item[1]);
	
	printf("enter price of first item");
	scanf("%d",&item[2]);
	
	int total,gst;
	total=item[0]+item[1]+item[2];
	gst=total+(total*18)/100;
	printf("total =%d",total);
	printf("total with gst=%d",gst);
	
	
}