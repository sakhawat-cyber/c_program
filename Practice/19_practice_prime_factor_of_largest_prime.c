/*
The prime factors of 13195 are 5, 7, 13, 29.
Write a C programming to find the largest prime factor of the number 438927456?. 
Expected Output:

415651
*/

#include <stdio.h>
int main()
{
    unsigned long long n = 438927456L;
    unsigned long long i;
    for (i = 2ULL; i < n; i++)
        //1ULL is unsigned long long
        while (n % i == 0)
        {
            n /= i;
        }
    printf("\nThe largest prime factor: %llu\n\n", n);
    return 0;
}