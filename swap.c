//Write a program to swap two variables values with and without using third variables
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two numbers\n");
    scanf("%d%d",&a,&b);
    int temp=a;
    a=b;
    b=temp;
    printf("the swap numbers  are %d and %d\n",a,b); 
    a =a+b;
    b=a-b;
    a=a-b;
    printf("the swap numbers  are %d and %d",a,b);
   
    
}