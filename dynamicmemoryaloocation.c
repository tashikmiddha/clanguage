#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("enter the size of integer array\n");
    scanf("%d",&n);
    //use of malloc
    int* ptr=(int* )malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
    scanf("%d",&ptr[i]);
    }
    for(int i=0;i<n;i++)
    {
    printf("the value at %d element is %d\n",i,ptr[i]);
    }
    free(ptr);
    return 0;
}