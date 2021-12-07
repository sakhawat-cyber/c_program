/*
 Write a C programming to add repeatedly 
 all digits of a given non-negative number
  until the result has only one digit. 
Example:
Input: 48
Output: 2
Explanation: The formula is like:
 4 + 8 = 12, 1 + 2 = 3.
*/

#include <stdio.h>

static int AddDigit(int num)
{
    return num - (num - 1) / 9 * 9;
}

int main()
{
    int x = 48;
    printf("Initial number is %d, single digit number is %d.\n", x, AddDigit(x));
    x = 47;
    printf("Initial number is %d, single digit number is %d.\n", x, AddDigit(x));
    return 0;
}