#include<stdio.h>
int main()
{
  int n,sum=0,b,d;
  printf("enter the number\n");
  scanf("%d",&n);
  b=n;
  while(b!=0)
  {
    d=b%10;
    sum =sum +d*d*d;
    b=b/10;
  }
  if(n==sum)
  {
    printf("%d is a armstrong number",n);
  }
  else{
    printf("%d is not a armstrong number",n);
  }
  
  return 0;
  
}
