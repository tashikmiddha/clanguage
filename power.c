/*Write a program to calculate pow(x,n) i.e to calculate xn

, where n is negative or positive.

A) Using recursion b) without recursion
Sample input Sample output
3,4 81
2,5 32*/
#include<stdio.h>
#include<math.h>
int power(int a,int b)
{
    if(b==0)
    {
        return 1;
    }
    int ans=a*power(a,b-1);
    return  ans;
}
int main()
{
    int a,b;
    printf("enter the base and the power\n");
    scanf("%d%d",&a,&b);
    // with recursion
    int c=power(a,b);
     printf("the power %d of base %d is %d\n",b,a,c);
    //without recursion
    int d=1;
    for(int i=0;i<b;i++)
    {
       d=d*a; 
    }
    printf("the power %d of base %d is %d",b,a,d);
    return 0;
}