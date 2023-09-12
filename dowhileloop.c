#include<stdio.h>
int main()
{
    int a,index=1;
    printf("Enter a number\n");
    scanf("%d",&a);
    do// this is used to do continuous things like printing numbers from 1 to 10
    {
     printf("%d\n",index);
     index++;
    }while(index<=a);
    // here the loop will execute atleast once 
    return 0;
    
}