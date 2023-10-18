#include<stdio.h>
int main()
{
float amount,year;

printf("enter the amount you want and for how many years\n");
scanf("%f%f",& amount,& year);
printf("our interset rate is 0.04\n");
int interest=0.04*amount*year;
printf("th amount you will give me after %f year is %f",year,amount +interest);
return 0;
}
