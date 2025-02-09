#include<stdio.h>
#define clg "cimage"
#define pi 3.14
int main(){
	printf("the value of pi =%f",pi);
	printf("my collage is=%s",clg);
	#ifdef clg
	       printf("yes clg is defined as cimage");
	#else printf("no not defined ");
	#endif
	return 0;
}