#include<stdio.h>
// program to print all the letter a alphabet using pointer 
int main(){
	
    char *ptr;
	for (char ch='A';ch<='Z';ch++){
	   ptr=&ch; 
     	printf("%c\n",*ptr);
	}
    return 0;
}