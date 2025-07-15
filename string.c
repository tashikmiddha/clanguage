#include<stdio.h>
void printstr(char string[])//here we pass a character array in this function
{
    int i=0;
    while(string[i]!='\0')
    {
       printf("%c",string[i]);
       i++;
    }
}
int main()
{
  //char str[]={'t','a','s','h','i','k','\0'};//we can declare the string as this
  //char str[]={"tashik"};
  char str[34];
  gets(str);// third method of giving the string
  //printf("%s",str);
  //printstr(str);
  puts(str);
  return 0;
}