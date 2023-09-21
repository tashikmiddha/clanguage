// #include<stdio.h>
// int* myfun( )
// {
//     int a=34;
//     return &a;
// }
// int main()
// {
//     int *ptr=myfun();//this is a dangling ponter because a variable is distroy when myfun execute and this pointer point noting 
//     printf("%d",*ptr);
//     return 0;
// }
#include<stdio.h>
int main()
{
    int *  ptr =(int *)malloc(2*sizeof(int));
    ptr[0]=31;
    ptr[1]=31;
    free(ptr);//ptr is now a dangling pointer
    return 0;
}