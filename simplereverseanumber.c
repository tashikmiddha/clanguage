/*Write a C program to prompt the user to input 4 integer values and print these values in
forward and reversed order*/
#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter four integer values\n ");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    printf("forward order %d%d%d%d\n",a,b,c,d);
     printf("reverse order %d%d%d%d",d,c,b,a);
}