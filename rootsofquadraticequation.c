#include<stdio.h>
#include<math.h>

int main()
{
int a,b,c,d;
printf("the quadratic equation is in form of ax*x +bx +c \n then enter the value of a,b and c \n");
scanf("%d%d%d",&a,&b,&c);
d= b*b -4*a*c;
printf("the roots of the quadratic equation are %f and %f ",(-b + sqrt(d))/(2*a),(-b - sqrt(d ))/(2*a));

return 0;
}
