#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a number \n1.addition\n2.subtraction\n3.multiplication\n4.division\n ");
    scanf("%d",&a);
    switch(a) // here we use switch statement because we need to create options in our program
    {
        case 1:
        printf("Enter two numbers \n");
        scanf("%d%d",&b,&c);
        printf("the Addition is %d",b+c);
        break;
        case 2:
        printf("Enter two numbers \n");
        scanf("%d%d",&b,&c);
        printf("the subtraction is %d",b-c);
        break;
        case 3:
        printf("Enter two numbers \n");
        scanf("%d%d",&b,&c);
        printf("the multiplication is %d",b*c);
        break;
        case 4:
        printf("Enter two numbers \n");
        scanf("%d%d",&b,&c);
        printf("the division is %f ",(float)b/c);
        break;
        default:
        printf("invalid number ");
    }
    return 0;
}