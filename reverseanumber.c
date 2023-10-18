#include<stdio.h>
int main()
{
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    int ans=0,sum=0;
    while(n>0)
    {
        ans =n%10;
        sum =sum*10 +ans;
        n=n/10;
    }
    printf("the reverse is %d",sum);
}