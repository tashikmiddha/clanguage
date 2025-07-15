/*Write a program to swap first and last digits of any number.
Sample input Sample output
6482 2486*/
#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("enter the number\n");
    scanf("%d",&n);
    int k=0,j=n,l=n;
    while(j>0)
    {
        j=j/10;
        k++;
    }
    int rem=l%10;
    int m=l/pow(10,k-1);
    j=m*pow(10,k-1);
    l=l-j;
    l=l-rem;
    int o=rem*pow(10,k-1);
    printf("the new number is %d",o+l+m);
    return 0;
}