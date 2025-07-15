/*
 Write a program to display the largest of five number using ternary operator.
Sample input : Enter the number : 35
Enter the number : 135
Enter the number : 835Enter the number : 375
Enter the number : 535
Sample output: The largest of five number enters is : 835*/
#include<stdio.h>

int main()
{
    int a,b,c,d,e;
        printf("enter number: ");
        scanf("%d",&a);
        printf("\n");
        printf("enter number: ");
        scanf("%d",&b);
        printf("\n");
        printf("enter number: ");
        scanf("%d",&c);
        printf("\n");
        printf("enter number: ");
        scanf("%d",&d);
        printf("\n");
        printf("enter number: ");
        scanf("%d",&e);
        printf("\n");
        (a>b)? (a>c)? (a>d)?(a>e)? printf("%d is largest\n",a):printf("%d is largest\n",e):(d>e)? printf("%d is largest",d):printf("%d is largest",e):(c>d)?(c>e)?printf("%d is largest\n",c):printf("%d is largest\n",e):(d>e)? printf("%d is largest",d):printf("%d is largest",e):(b>c)?(b>d)?(b>e)?printf("%d is largest\n",b):printf("%d is largest\n",e):(d>e)? printf("%d is largest",d):printf("%d is largest",e):(c>d)?(c>e)?printf("%d is largest\n",c):printf("%d is largest\n",e):(d>e)? printf("%d is largest",d):printf("%d is largest",e);
        return 0;
}