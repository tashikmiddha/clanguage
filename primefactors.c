#include<stdio.h>
int main()
{
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    int d=n;
    for(int i=2;i<d;)
    {
        if(n%i==0)
        {
          printf("%d ",i);
          n=n/i;
        }
        else
        {
            i++;
        }
    }

}