/*
Write a program to calculate sum of series 1
1! + 2 2!+ 3 3! +4 4! + ⋯ + n n!*/
#include<stdio.h>
int factorial(int n)
{
    if(n==1)
    {
        return 1;
    }
    int ans = n*factorial(n-1);
    return ans;
}
int main()
{
    int n;
    printf("enter the number\n");
    scanf("%d",&n);
    float sum=0.0;
    for(int i=1;i<=n;i++)
    {
        float j=i;
        float k=factorial(i);
        sum = sum+ (j/k);
    }
    printf("the sum is %f",sum);
    return 0;

}