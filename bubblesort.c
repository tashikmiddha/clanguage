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
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if((a[j]>a[j+1]) && (j+1)!=n)
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            
        }
    }
     for(int i=0;i<n;i++)
    {
       printf("%d ",a[i]);
    }
    return 0;
}