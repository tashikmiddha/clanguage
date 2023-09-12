#include<stdio.h> 
int main()
{
    int a,b; // here a,b are variables whose data type is integer
    printf("Enter the value of a \n");//\n is a escape sequence which is used to go to next line
    scanf("%d",&a);// scanf is a predefined function in stdio.h which is used to take input from the user
    // %d is used for integer data type and &a is used to give address of a
    printf("Enter the value of b \n");
    scanf("%d",&b);
    printf("The sum is %d",a+b);
    return 0;
}
