
/*
Write a program to enter a character and then determines whether the entered character is
an alphabet or not. (using if- else statement )
Sample input Sample output
A Alphabet
~ Not an Alphabet*/
#include<stdio.h>
int main()
{
    char n;
    printf("enter a character\n");
    scanf("%c",&n);
    if((n>=97 && n<=122) || (n>=65 && n<=90))
    {
        printf("alphabet\n");
    }
    else 
    {
        printf("not a alphabet\n");
    }
    return 0;
}