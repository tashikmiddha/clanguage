//Write a program to read a character in upper case and then print it in lower case.
#include<stdio.h>
int main()
{
	char a;
	printf("Enter a characterin upper case\n");
	scanf("%c",&a);
	char b =a+32;
	printf("the character in lower case is %c\n",b);
}
