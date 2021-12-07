/* 
Write a program in C to check whether a number is a Pronic Number or Heteromecic Number or not.

Expected Output :
Input a number: 132
The given number is a Pronic Number. 
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main()
{
    int i, num, n;
    printf("Input a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i * (i + 1) == n)
        {
            num = 1;
            break;
        }
    }
    if (num == 1)
        printf("The given number is a pronic number.");
    else
        printf("The given number is not a pronic number.");
}