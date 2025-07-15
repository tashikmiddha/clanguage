#include<stdio.h>
union student //union is used when we need only one thing from the variable like only id or only favchar other will currupt self
{
  int id;
  char favchar;

}tashik; // we use this when we need to save memory . it occupied the max memory of the variable for union
int main()
{
  tashik.id =115;
  tashik.favchar='p';
  printf("the id is %d and favchar is %c",tashik.id,tashik.favchar);// here the later declared one is correct but other are currupt
 return 0;
}