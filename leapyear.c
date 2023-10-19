/*
Write a program in C to find whether a given year is a leap year or not. (a year is leap
if it is divisible by 4 and divisible by 100 or 400.)
Sample input Sample output
2020 Leap Year
2007 Not a Leap Year*/
#include<stdio.h>
int main()
{
    int n;
    printf("enter the year\n");
    scanf("%d",&n);
    if(n%4==0 && n%100!=0)
    {
        printf("leap year\n");
    }
    else if(n%4==0 && n%100==0 && n%400==0)
    {
        printf("leap year\n");
    }
    else 
    {
        printf("not a leap year\n");
    }
    return 0;
}