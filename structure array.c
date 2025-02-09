#include<stdio.h>
#include<string.h>
struct student{
	int id;
	char name[50];
	float marks;
};
int main(){
	struct student cimage[100];
	struct student st_xavior[0]={211,"aman",77.3};
	
	
	cimage[0].id=1000;
	cimage[0].marks=98;
	strcpy(cimage[0].name,"suman");
	
	printf("name=%s\n",cimage[0].name);
	printf("id =%d\n",cimage[0].id);
	printf("marks =%f\n",cimage[0].marks);
	
	printf("name=%s",st_xavior[0].name);
	printf("id=%d",st_xavior[0].id);
}