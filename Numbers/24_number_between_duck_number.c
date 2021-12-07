/* 
Write a program in C to find Duck Numbers between 1 to 500.

Expected Output :
The Duck numbers are: 10 20 30 40 50 60 70 80 90 100 101 102......
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, n1, num;
    num = 0;
    printf("The Duck numbers are: \n");

    for (i = 1; i <= 500; i++)
    {
        n1 = i;
        num = 0;
        while (n1 > 0)
        {
            if (n1 % 10 == 0)
            {
                num = 1;
                break;
            }
            n1 /= 10;
        }
        if (i > 0 && num == 1)
        {
            printf("%d ", i);
        }
    }
}