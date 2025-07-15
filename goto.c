#include<stdio.h>
int main()
{
    //this is infinite loop 
    label:
    printf("we are inside label\n");
    printf("hello world\n");
    goto label;//this is used to go to specipic location
    return 0;

}