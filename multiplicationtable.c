#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number \n");
    scanf("%d",&a);
    for(int i=1;i<=10;i++) // this is a for loop which is used to reduce the code
    {
        printf("%d * %d = %d \n",a,i,a*i);
    }
    return 0;
}