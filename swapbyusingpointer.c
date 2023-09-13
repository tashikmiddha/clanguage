#include<stdio.h>
void swap(int* a,int* b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a,b;
    printf("enter two numbers\n");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("the swap numbers are %d and %d",a,b);
    return 0;
}