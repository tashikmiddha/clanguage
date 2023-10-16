/*Design a calculator which takes input as a choice for operation to perform on them(1 for
addition, 2 for subtraction, 3 for multiplication, 4 for division, 5 for exit) and two
numbers(if required by operation) . The program should not terminate until the user
don’t choose to close it. (Use do while ). Use goto statement to transfer control out of a
loop if an unexpected condition arises. (eg : use goto errorcheck )
Sample input Sample output
Enter the choice : 1, 20,30 Addition of 20 and 30 : 40
Enter the choice : 5 Exiting calculator…*/
#include<stdio.h>
int main()
{
    do{
    int n,a,b;
    printf("enter the number \n1 for addition\n2 for subtraction\n3 for multiplication\n4 for division\n5 for exit\n");
    scanf("%d",&n);
    switch(n)
    {
      case 1:
      printf("enter two numbers\n");
      scanf("%d%d",&a,&b);
      printf("the addition is %d\n",a+b);
      break;
      case 2:
      printf("enter two numbers\n");
      scanf("%d%d",&a,&b);
      printf("the subtraction is %d\n",a-b);
      break;
      case 3:
      printf("enter two numbers\n");
      scanf("%d%d",&a,&b);
      printf("the multiplication is %d\n",a*b);
      break;
      case 4:
      printf("enter two numbers\n");
      scanf("%d%d",&a,&b);
      printf("the division is %f\n",(float)a/b);
      break;
      case 5:
      printf("Exiting calculator…");
      goto errorcheck;
    }
    }while(1);
    errorcheck:
    return 0;
}