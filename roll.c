#include<stdio.h>
union student{
	char name[50];
	int roll;
	int id;
}s1,s2;
int main(){
	union student;
	s1.roll=213;
	s1.id=23;
	printf("roll is %d",s1.roll);
	printf("id  is %d",s1.id);
}