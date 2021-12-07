/* 
Write a program in C to generate and show all Kaprekar numbers less than 1000. Go to the editor

Expected Output :
The Kaprekar numbers less than 1000 are:
1 9 45 55 99 297 703 999
*/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool CheckKaprekar(int n)
{
    int sqr_n = n * n, num_digits = 0, r_digits, eqn_parts, sum;
    if (n == 1)
        return true;
    while (sqr_n)
    {
        num_digits++;
        sqr_n /= 10;
    }
    sqr_n = n * n;
    for (r_digits = 1; r_digits < num_digits; r_digits++)
    {
        eqn_parts = pow(10, r_digits);
        if (eqn_parts == n)
            continue;
        sum = sqr_n / eqn_parts + sqr_n % eqn_parts;
        if (sum == n)
            return true;
    }
    return false;
}

int main()
{
    int i;
    printf("The Kaprekar numbers less than 1000 are: ");
    for (i = 1; i <= 100; i++)
    {
        if (CheckKaprekar(i))
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}