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
    printf("array before reverse\n");
    for(int i=0;i<n;i++)
    {
       printf("%d ",a[i]);
    }
    for(int i=0;i<(n/2);i++)
    {
        int temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    }
     printf("\narray after reverse\n");
    for(int i=0;i<n;i++)
    {
       printf("%d ",a[i]);
    }
    return 0;
}