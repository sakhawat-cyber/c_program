/*
The sum of the squares of the first ten natural numbers is,
12 + 22 + ... + 102 = 385
The square of the sum of the first ten natural numbers is,
(1 + 2 + ... + 10)2 = 552 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.
Write a C programming to find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum. Go to the editor
Expected Output:

25164150
*/

#include<stdio.h>

int main()
{
    unsigned int sum1 = 0, sum2 = 0, i;
    for(i = 1; i <= 100; i++)
    {
        sum1 = i * i;
        sum2 += i;
    }
    printf("\nFind the difference between the sum of the square: %u\n\n", sum2 * sum2 - sum1);
    return 0;
}