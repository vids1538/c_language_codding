#include<stdio.h>
int main()
{
	// code to input a string and output the size of that string 
	int i;
	char str[31];
	printf("enter your string   ");
	scanf("%s",str);    // when you refering array then & should not be their because array hold location of its starting element address
	for(i=0;str[i]!='\0';i++);
	printf("\n Length of the string is %d",i);
	return 0;
}
int x;
{
	char str1[31];
printf("enter your string");
scanf("%s",str1);

for (x=0; str1[x]!='\0';i++);

printf("length of the string is %d",x);
printf(" \n reversed string is    ");
for (--i;i>=0;i--)
{
	printf("%c",str[i]);
}
return 0;
}
