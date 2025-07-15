/*1. Write a program to enter a decimal number. Using function , calculate and display the
• Binary equivalent
• Octal equivalent
• Hexadecimal equivalent
Sample input Sample output
Enter the choice : 10 Binary : 00001010
Octal : 12
Hexadecimal : A*/
#include<stdio.h>
#include<math.h>
void decimal(int n)
{
    int arr[8]={0};
 int j=n;
    for(int i=0;j>0;i++)
    {
      arr[7-i]=j%2;
      j=j/2;  
    }
    printf("binary: ");
    for(int i=0;i<8;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
}
void octal(int n)
{
    int arr1[8]={0};
int k=n;
    for(int i=0;k>0;i++)
    {
      arr1[7-i]=k%8;
      k=k/8;  
    }
    printf("octal: ");
    for(int i=0;i<8;i++)
    {
        printf("%d",arr1[i]);
    }
     printf("\n");
}
int hexadecimal(int n)
{
  char arr1[8]={'0'};
  int k=n;
    for(int i=0;k>0;i++)
    {
     if((k%16)<=9)
      arr1[7-i]=(char)((k%16) +48);
      else if((k%16)==10)
      {
        arr1[7-i]='A';
      }
      else if((k%16)==11)
      {
        arr1[7-i]='B';
      }
      else if((k%16)==12)
      {
        arr1[7-i]='C';
      }
      else if((k%16)==13)
      {
        arr1[7-i]='D';
      }
      else if((k%16)==14)
      {
        arr1[7-i]='E';
      }
      else if((k%16)==15)
      {
        arr1[7-i]='F';
      }
      k=k/16;  
    }
    printf("octal: ");
    for(int i=0;i<8;i++)
    {
        printf("%c",arr1[i]);
    }
     printf("\n");
}
int main()
{
    int n;
    printf("enter the decimal number\n");
    scanf("%d",&n);
    decimal(n);
    octal(n);
    hexadecimal(n);

}