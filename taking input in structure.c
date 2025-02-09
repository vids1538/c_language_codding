#include<stdio.h>
#include<string.h>
union student{
	char name[100];
	int id;
	float marks;
}e1,e2,e3;   // declaring e1 e2 e3 variable for structure 
int main(){
	printf("enter name =");
	scanf("%[^\n]s",&e1.name);
	printf("\nname=%s",e1.name);
	printf("enter id=");
	scanf("%d",&e1.id);
	printf("\nid =%d",e1.id);
	printf("enter marks =");
	scanf("\n%f",&e1.marks);
	
    printf("marks=%f",e1.marks);
	
	
	
	
}