#include<stdio.h>
#include<math.h>

int main()
{
 int n;
 printf("enter the number\n");
 scanf("%d",&n);
 for(int i=2;i<sqrt(n);i++)
 {
    if(n%i==0)

    {
        printf("%d is not a prime number\n",n);
        goto end;
    }
 }
 printf("%d is a prime number",n);
end:
 return 0;
}