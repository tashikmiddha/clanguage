#include<stdio.h>
#define pi 3.14
int main()
{
    float radius;
    const int member =1;
    //member =2; this will throw an error because member is a constant integer we cannot change the value of member
    printf("enter the radius of circle\n");
    scanf("%f",&radius);
    printf("the area of the circle is %f",pi*radius*radius);
    return 0;
}