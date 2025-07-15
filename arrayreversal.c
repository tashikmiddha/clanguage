#include<stdio.h>
void arrrev(int n,int arr[])
{
    int temp;
    for(int i=0;i<n/2;i++)// this for loop swap all the elements of the array
    {
     temp=arr[i];
     arr[i]=arr[n-1-i];
     arr[6-1-i]=temp;
    }
    for(int i=0;i<n;i++)//this for loop print the reversed array
    {
        printf("the %d element of array is %d\n",i,arr[i]);
    }
}
int main()
{
    int n;
    printf("enter the size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements in the array\n");
    for(int i=0;i<n;i++)//from this we can take array as an input from the user
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)// this for loop is use to print the array input by the user
    {
        printf("the %d element of array is %d\n",i,arr[i]);
    }
    arrrev(n,arr);
    return 0;
    

}