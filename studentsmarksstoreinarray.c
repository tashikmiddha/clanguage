#include<stdio.h>
int main()
{ 
     int n;
     printf("enter the no of studens \n ");
     scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("enter the marks of %d stduent\n",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("the marks of %d student is %d\n",i+1,arr[i]);
    }
    return 0;
}