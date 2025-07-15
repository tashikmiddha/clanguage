#include<stdio.h>
int main()
{
    int a;
    int *ptr;// this is a wild pointer
    ptr=&a;// no longer a whild pointer
    return 0;
}