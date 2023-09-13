#include<stdio.h>
int main()
{
    int a;
    while(1)
    {
    printf("enter your age and 555 for exit the loop \n");
    scanf("%d",&a);
    if(a==555)
    {
        break;// this statement breaks the infinite loop
        // the break statement put you out from only 1 loop
    }
    //continue statement is used to skip one entity the remaining loop will continue to do the work
    }
    return 0;
}