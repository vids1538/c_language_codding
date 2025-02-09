#include<stdio.h>
#include<string.h>
struct student {
	int id;
	float marks;
	int roll;
	char name[50];
};
int main(){
	struct student s1;
	struct student s2;
	struct student *ptr;

	
	strcpy(s1.name,"vids");
	
	s1.id=1;
	s2.id=2;

	s1.marks=93;
	s2.marks=87;

	s1.roll=1;
	s2.roll=2;

	printf("id=%d\nroll=%d\nmarks=%f",s1.id,s1.roll,s1.marks);
	printf("id=%d\nroll=%d\nmarks=%f",s2.id,s2.roll,s2.marks);	
	printf("\nname =%s",s1.name);
//	printf("roll =%d \n id =%d\n marks =%f",)
}