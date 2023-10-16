/*Write a C program to prompt the user to input 2 integer values and perform the different
bitwise operators : Bitwise AND, Bitwise OR, Bitwise XOR, Bitwise complement
(+2's Complement), Right shift operator and Left shift operator.*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two nubers\n");
    scanf("%d%d",&a,&b);
    printf("bitwise and is %d \n",a&b);
    printf("bitwise or is %d \n",a|b);
    printf("bitwise  xor is %d \n",a^b);
    printf("bitwise complement of a is %d \n",~a);
    printf("bitwise complement of b is %d \n",~b);
    printf("right shift the operator a by 1 is %d \n",a>>1);
    printf("left shift the operator a by 1 is %d \n",a<<1);
    printf("right shift the operator b by 1 is %d \n",b>>1);
    printf("left shift the operator b by 1 is %d \n",b<<1);
    return 0;
    
}
