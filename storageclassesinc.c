#include<stdio.h>
int sum =0;// this is global variable 
int sum1(int c,int d)
{
   // int sum=c+d;// this is a local variable in function sum1
   extern int sum;// this is used when we use global variable   
    return  sum ;
}
int main()
{
int a,b;
printf("enter two numbers\n");
scanf("%d%d",&a,&b);
printf("the sum is %d",sum1(a,b));
return 0;

}