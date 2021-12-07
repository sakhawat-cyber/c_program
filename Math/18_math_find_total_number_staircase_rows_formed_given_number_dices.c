/*
 Write a C programming to find the total number of full staircase rows that can be formed from given number of dices.
Example 1:
n = 5
The dices can form the following rows:
C Exercises: staircase format when n = 5.
As the 3rd row is incomplete the program will return 2 (full staircase rows).
Example 1:
n = 8 The dices can form the following rows:
C Exercises: staircase format when n = 8.
As the 4th row is incomplete the program will return 3 (full staircase rows).
*/

#include <stdio.h>

int CheckStairCase(int n)
{
    if (n < 0)
        return -1;
    if (n == 0)
        return 0;
    int rows = 0;
    long sum = 0;
    while (sum <= n)
    {
        sum += rows + 1;
        rows++;
    }
    return rows - 1;
}

int main()
{
    int n = 5;
    printf("\nInput number %d\nThe dices can from the following rows \n", n);
    printf("As the 3rd row is incomplete the program will return %d (full staircase rows).\n\n", CheckStairCase(n));

    n = 8;
    printf("\nInput number %d\nThe dices can from the following rows \n", n);
    printf("As the 3rd row is incomplete the program will return %d (full staircase rows).\n\n", CheckStairCase(n));
    return 0;
}