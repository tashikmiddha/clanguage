/*
Write a program to input two integer numbers and display the sum of even numbers
between these two input numbers.
Sample input Sample output
Enter the two integer no : 1, 7 Sum is : 12*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two numbers\n");
    scanf("%d%d",&a,&b);
    int sum=0;
    for(int i=a;i<b;i++)
    {
        if(i%2==0)
        {
            sum+=i;
        }
    }
    printf("sum is %d",sum);
    return 0;
}