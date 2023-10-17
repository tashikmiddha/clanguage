#include<stdio.h>
int main()
{
    int n;
    printf("enter the number\n");
    scanf("%d",&n);
    int ans=0,sum=0;
    while(n>0)
    {
     ans =n%10;
     sum=sum +ans;
     n=n/10;
    }
    printf("%d",sum);
    return 0;
}