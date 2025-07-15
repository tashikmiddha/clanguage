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
    int x=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
          if(a[i]==a[j])
          {
            x=1;
            goto end;
          }
        }
    }
    end:
    if(x==1)
    {
        printf("there is a duplicate element");
    }
    else
    {
        printf("there is no duplicate element");
    }
    return 0;
}