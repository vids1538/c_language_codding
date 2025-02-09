#include<stdio.h>
#include<string.h>
int main(){
	FILE *fptr;
	char ch[10];
	
	fptr=fopen("mytext.txt","w");
	if (fptr!=NULL){
		printf("enter a character :");
		fscanf(fptr,"%c",&ch);
	}
	
	
}