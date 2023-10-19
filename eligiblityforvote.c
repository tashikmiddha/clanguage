/*
Write a program in C to determine whether a person is eligible to vote . (using if statement)
Sample input Sample output
19 Eligible to vote
6 Not Eligible*/
#include<stdio.h>
int main()
{
    int n;
    printf("enter your age\n");
    scanf("%d",&n);
    if(n>=18)
    {
        printf("eligible to vote\n");
    }
    if(n<18)
    {
        printf("not eligible\n");
    }
    return 0;
}