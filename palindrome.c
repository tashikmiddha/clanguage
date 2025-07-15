#include<stdio.h>
int checkpalindrome(char a[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]!=a[n-1-i])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    printf("enter the length of the array\n");
    scanf("%d",&n);
    char a[n+1];
    printf("enter the string\n");
    scanf("%s",a);
    int b=checkpalindrome(a,n);
    printf("%d",b);
    return 0;
}