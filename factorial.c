#include<stdio.h>
int factorial(int a)
{
    if(a==1 || a==0)
    {
        return 1;
    }
    return (a * factorial(a-1));

}
int main()
{
    int a,ans;
    printf("enter a number\n");
    scanf("%d",&a);
    printf("the factorial of %d is %d",a,factorial(a));
    return 0;

}