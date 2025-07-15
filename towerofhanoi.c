/*10. Write a c program to solve the tower of Hanoi problem. Take the number of rings as input
from the user and Display the number of the step required to solve that problem.
The problem statement is as following :
• Initially all the disks are stacked on the LEFT pole.
• Required to transfer all the disks to the RIGHT pole.
o Only one disk can be moved at a time.
o A larger disk cannot be placed on a smaller disk.
• CENTER pole is used for temporary storage of disks*/

#include <stdio.h>
void towerOfHanoi(int n, char left, char right, char center)
{
    if (n == 1)
    {
        printf("\n Move disk 1 from rod %c to rod %c", left, right);
        return;
    }
    towerOfHanoi(n-1, left, center, right);
    printf("\n Move disk %d from rod %c to rod %c", n, left, right);
    towerOfHanoi(n-1, center, right, left);
}
 
int main()
{
    int n ; 
    printf("enter the no of disks\n");
    scanf("%d",&n);
    towerOfHanoi(n, 'A', 'C', 'B'); 
    return 0;
}
