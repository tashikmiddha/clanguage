#include<stdio.h>
int main()
{
    int n;
    printf("enter the length of array\n");
    scanf("%d",&n);
    int a[n];
    int sum=0;
    printf("enter the elements of the array\n");
    for(int i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
       sum=sum+a[i];
    }
    float s=sum;
    printf("the sum and average of the array are %d and %f",sum,s/n);
    return 0;
}