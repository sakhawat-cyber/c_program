/*
 Write a program in C to check if a number is Authomorphic or not.

Expected Output :
Input a number: 76
The given number is an Automorphic Number.
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool CheckAuthmorphic(int num)
{
    int n1 = num * num;
    while (num > 0)
    {
        if (num % 10 != n1 % 10)
            return false;
        num /= 10;
        n1 /= 10;
    }
    return true;
}

int main()
{
    int n;
    printf("Input a number: ");
    scanf("%d", &n);
    if (CheckAuthmorphic(n))
        printf("The given number is an Automorphic.");
    else
        printf("The given number is not an Automorphic.");
    return 0;
}