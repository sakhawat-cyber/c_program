/*
A prime number is a natural number greater than 1 that cannot be formed by multiplying two smaller natural numbers. A natural number greater than 1 that is not prime is called a composite number. For example, 5 is prime because the only ways of writing it as a product, 1 × 5 or 5 × 1, involve 5 itself. However, 6 is composite because it is the product of two numbers (2 × 3) that are both smaller than 6.
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
Write a C programming to find the sum of all the primes below ten thousand.
Expected Output:

5736396
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *temp;
    unsigned i, j;
    size_t num = 10000;
    unsigned long long sum = 0ULL;

    temp = calloc(num, sizeof *temp);
    for (i = 2; i < num; i++)
    {
        if (!temp[i])
        {
            sum += i;
            for (j = i * 2; j < num; j += i)
            {
                temp[j] = 1;
            }
        }
    }
    free(temp);
    printf("\n%llu\n\n", sum);
}