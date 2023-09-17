#include<stdio.h>
#include<stdlib.h>
int main()
{
    char name[45];
    printf("enter your name \n");
    gets(name);
    printf("Hello , ");
    puts(name);
    int a,b,c,d,e;
    printf("\nenter your marks in all the 5 subjects\n(out of 100 in every subject)\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    printf("the total marks scored is %d\n",a+b+c+d+e);
    printf("percentage scored is %d \n",(a+b+c+d+e)/5);
    if(((a+b+c+d+e)/5)>=90)
    {
        printf("A grade");
    }
    else if(((a+b+c+d+e)/5)>=70 && ((a+b+c+d+e)/5)<=90)
    {
     printf("B grade");   
    }
    else if(((a+b+c+d+e)/5)>=50 && ((a+b+c+d+e)/5)<=70)
    {
        printf("C grade"); 
    }
    else 
    {
        printf("D grade"); 
    }
    return 0;
}