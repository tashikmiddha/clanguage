#include<stdio.h>
int main()
{
    int a;
    float b;
    printf("enter the value of (integer) a and (float) b\n");
    scanf("%d%f",&a,&b);
    printf("the value of a is %d and value of b is %0.4f",a,b);// here 0.4 f means that after the decimal point there are 4 numbers 
    return 0;

}