#include<stdio.h>
#include<string.h>//this is a preprocessor command and string.h is a header file which contain almost all the  predefined functions related with string

int main()
{
 char s1[]="tashik";
 char s2[]="middha";
 char s3[45];
 printf(" the length of s1 is %d \n",strlen(s1));//strlen is a function which give length of the string entered
 printf(" the length of s2 is %d \n",strlen(s2));
 printf("the reverse string s1 is %s\n",strrev(s1));//strrev is a function which give the reverse of that string as output
 printf("the reverse string s2 is %s\n",strrev(s2));
 strcpy(s3,strcat(s1,s2));// strcpy is used to copy a string into another variable and strcat is used to concatinate two strings 
 puts(s3);
 return 0;
}