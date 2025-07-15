#include<stdio.h>
int main()
{
    int a=34;
    float b=56.56;
    void* ptr;
    // ptr =&a;
    // printf("the value at ptr is %d ",*((int * )ptr));// here first we typecast it to integer pointer then dereference it
    //printf(" the value at pte is %d",*ptr);//this will throw an error because ptr is a void pointer
    ptr  =&b;
    printf("the value at ptr is %f ",*((float * )ptr));
    return 0;

}