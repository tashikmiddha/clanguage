/*Take input as days, convert and display an equivalent number of months and days.
Assumption one month has 30 day*/
#include<stdio.h>
int main()
{
	int a;
	printf("enter the days\n");
	scanf("%d",&a);
	int months=a/30;
	int days =(a - (months*30));
	printf("%d months and %d days\n",months,days);
}
