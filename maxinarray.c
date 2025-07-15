#include<stdio.h>
int main()
{
    int n;
    printf("enter the length of array\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of the array\n");
    
    for(int i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    int max=a[0];
    for(int i=0;i<n;i++)
    {
        max = (max>a[i])?max:a[i];
    }
    printf("the maximum is %d",max);
    return 0;
}