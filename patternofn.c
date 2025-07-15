/*Write a program in C to print the following pattern.(The number of rows and columns and
Character to display must be entered by user)
Sample input Sample output
4,5, N N N N N N
N N N N N
N N N N N
N N N N N*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the value of row and column\n");
    scanf("%d%d",&a,&b);
    for(int i=0;i<a;i++)
    {
        for (int j=0;j<b;j++)
        {
            printf("N ");
        }
        printf("\n");
    }
}