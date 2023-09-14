#include<stdio.h>
void swap(int* a,int* b)//the address is stored in these new a and b pointers
{
    int temp=*a;  // this is a method of swaping
    *a=*b;
    *b=temp;
}
int main()
{
    int a,b;
    printf("enter two numbers\n");
    scanf("%d%d",&a,&b);
    swap(&a,&b);//here we give address of a and b as arguments
    printf("the swap numbers are %d and %d",a,b);
    return 0;
}