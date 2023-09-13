#include<stdio.h>
//function divide the code into small fragments
int sum( int a,int b)// this is a function with return type int and take two variables a and b
{
    int sum =a+b;
    return sum;

}
int main()
{
    int a,b ;
    printf("enter two numbers\n");
    scanf("%d%d",&a,&b);
    printf("the sum is %d",sum(a,b));//here we call the function
    return 0;
}