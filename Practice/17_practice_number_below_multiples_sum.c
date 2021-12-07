/*
 The natural numbers below 10 that are multiples of 3 or 7 are 3, 7, 6 and 9. The sum of these multiples is 25.
Write a C programming to find the sum of all the multiples of 3 or 7 below 100. 
Expected Output:

2208
*/

#include <stdio.h>
int main()
{
    int sum3 = 0, sum7 = 0, sum21 = 0;
    int i;
    for (i = 0; i < 100; i++)
    {
        if (i % 3 == 0)
            sum3 += i;
        if (i % 7 == 0)
            sum7 += i;
        if (i % 21 == 0)
            sum21 += i;
    }
    printf("\nThe sum is: %d\n\n", sum3 + sum7 - sum21);
    return 0;
}