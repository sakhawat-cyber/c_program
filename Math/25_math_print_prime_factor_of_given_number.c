/*
Write a C program to print all prime factors of a given number. 
Example 1:
Input: n = 75
Output: All prime factors of 75 are: 3 5 5
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int n = 18, i;
    printf("n = %d\n", n);
    printf("All prime factor of %d are: ", n);
    if (n > 0)
    {
        while (n % 2 == 0)
        {
            printf("2 ");
            n /= 2;
        }
        for (i = 3; i <= sqrt(n); i += 2)
        {
            while (n % i == 0)
            {
                printf("%d ", i);
                n /= i;
            }
        }
        if (n > 2)
            printf("%d ", n);
    }
}