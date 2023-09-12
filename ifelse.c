#include<stdio.h>

int main()
{
    int age;
    printf("enter your age \n");
    scanf("%d",&age);
    if(age<18)// here we use if else statements if you have to choices 
    {
        printf("age is less than 18\n");
    }
    else if(age==18)
    {
        printf("age is equal to 18\n");
    }
    else 
    {
        printf("age is greater than 18\n");
    }
    return 0;
}