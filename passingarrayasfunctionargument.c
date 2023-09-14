#include<stdio.h>
void func1(int array[])//here we pass a integer array as argument
{
    for (int i=0;i<9;i++)
    {
        printf("the value at %d is %d\n",i+1,array[i]);
    }
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    func1(arr);
    return 0;
}