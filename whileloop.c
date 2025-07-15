#include<stdio.h>
int main()
{
    int a,index=1;
    printf("Enter a number\n");
    scanf("%d",&a);
    while(index<=a)// this is used to do continuous things like printing numbers from 1 to 10
    {
     printf("%d\n",index);
     index++;
    }
    
    return 0;
    
}