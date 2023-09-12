#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    for(int index=1;index<=a;index++)// this is used to do continuous things like printing numbers from 1 to 10
    {
     printf("%d\n",index);
    }
   // first for loop declare index variable and then check the condition (index<=a) then it go into the for loop and execute the code in for loop and then it increment the index variable and again check the condition if it is true then the process is repeated otherwise it come out of the for loop
    return 0;
    
}