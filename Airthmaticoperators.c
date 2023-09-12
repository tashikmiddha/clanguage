#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of a and b \n");
    scanf("%d%d",&a,&b);
    printf("a + b =%d \n",a+b);
    printf("a - b =%d \n",a-b);
    printf("a * b =%d \n",a*b);
    printf("a / b =%f \n",(float)a/b);// here we use the type  casting method where we can change an integer datatype into float datatype
    
    return 0;
}