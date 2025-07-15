// #include<stdio.h>
// int main()
// {
//     int a,b,c ;
//     printf("Enter three numbers\n");
//     scanf("%d%d%d",&a,&b,&c);
//     if(a>b)
//     {
//         if(a>c)
//         {
//             printf("largest no is %d",a);
//         }
//         else
//         {
//             printf("largest no is %d",c);
//         }

//     }
//     else
//     {
//       if(b>c)
//         {
//             printf("largest no is %d",b);
//         }
//         else
//         {
//             printf("largest no is %d",c);
//         }

      
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int a,b,c;
//     printf("Enter three numbers\n");
//     scanf("%d%d%d",&a,&b,&c);
//     if(a>b && a>c)
//     {
//         printf("a is largest");
//     }
//     else if(b>a && b>c)
//     {
//         printf("b is largest");
//     }
//     else
//     {
//         printf("c is largest");
//     }     
//     return 0;


// }

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    (a>b)? (a>c) ? printf("%d is largest",a):printf("%d is largest",c): (b>c)?printf("%d is largest",b):printf("%d is largest",c);
}

