#include<stdio.h>
int func1(int b1)
{
    static int t=0;// static value is initiliase only once not again and again when we call function
    printf("the value of t is %d \n",t);
    t++;
    return b1 +t;
}
int main()
{
    int b= 344;
    func1(b);//after this function execute when again func1 is called t is not again initilise with 0
    func1(b);
    return 0;
}