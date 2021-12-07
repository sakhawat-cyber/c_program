/* 
Write a program in C to check whether a given number is a Kaprekar number or not. Go to the editor

Expected Output :
Input a number: 45
45 is a Kaprekar number.
*/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool CheckKaprekar(int n)
{
    int num_digits = 0, sqr_n = n * n, r_digits, eqn_parts, sum;
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
    int num;
    printf("Input a number: ");
    scanf("%d", &num);
    if (CheckKaprekar(num) == true)
        printf("%d is a kaprekar number.\n", num);
    else
        printf("%d is not a kaprekar.", num);
}