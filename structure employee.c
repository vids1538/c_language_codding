#include<stdio.h>
#include<string.h>
struct employee{
	int id;
	char name[50];
	float salary;
};
int main(){
	struct employee e1;
	struct employee e2;
	strcpy(e1.name,"aman");
	e1.id=2133;
	e1.salary=55000;
	strcpy(e2.name,"mohan");
	e2.id=2133;
	e2.salary=35000;
	printf("name=%s\n",e1.name);
	printf("id=%d\n",e1.id);	
	printf("salary=%f\n",e1.salary);
	printf("name=%s\n",e2.name);
	printf("id =%d\n",e2.id);
	printf("salary =%f\n",e2.salary);
}