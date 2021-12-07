/* 
Write a program in C to check whether a number is a Duck Number or not.

Expected Output :
Input a number: 3210
The given number is a Duck Number.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int n, num = 0, n1;
    printf("Input a number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        if (n % 10 == 0)
        {
            num = 1;
            break;
        }
        n /= 10;
    }
    if (n > 0 && num == 1)
        printf("The given number is a Duck number.");
    else
        printf("The given number is not a Duck number.");
}