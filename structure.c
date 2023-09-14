#include<stdio.h>
struct employee //here we create a structure with name employee this is used when many members has to input the same details like rollno
{
 int id ; // in structure there are differnt memory  blocks allorted to different variables 
 int marks;
 char fav_char;
};//this is the syntex of a structure
int main()
{
    struct employee tashik,hritik;//here we create two objects of the structure employee named tashik and hritik 
    tashik.id=115;//in this way you can give id of the object
    hritik.id=116;
    tashik.marks=45;
    hritik.marks=65;
    tashik.fav_char='m';
    hritik.fav_char='k';

    return 0;
}