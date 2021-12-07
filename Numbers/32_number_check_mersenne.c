/* 
Write a program in C to Check if a number is Mersenne number or not.

Expected Output :
Input a number: 127
127 is a Mersenne number.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int i, p, n1, ans, n;
    printf("INput a number: ");
    scanf("%d", &n);
    n1 = n + 1;
    for (i = 0;; i++)
    {
        p = (int)pow(2, i);
        if (p > n1)
            break;
        else if (p == n1)
        {
            printf("%d is a mersenne number.", n);
            ans = 1;
        }
    }
    if (ans == 0)
        printf("%d is not a mersenne number.\n", n);
}