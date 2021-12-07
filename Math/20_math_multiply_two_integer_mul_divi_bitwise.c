/*
Write a C program to multiply two integers without using multiplication, division, bitwise operators, and loops. 
Example 1:
Input: n1 = 50
Input: n2 = 12
Output: 600
Example 2:
Input: n1 = 0
Input: n2 = 12
Output: 0
*/

#include <stdio.h>

int MultiplyTwoNum(int a, int b)
{
    //0 multiplied with anything gives 0
    if (b == 0)
        return 0;
    if (b > 0)
        return (a + MultiplyTwoNum(a, b - 1));
    if (b < 0)
        return MultiplyTwoNum(a, -b);
    return -1;
}

int main()
{
    int n1 = 50, n2 = 12;
    printf("\n%d x %d = %d\n", n1, n2, MultiplyTwoNum(n1, n2));
    n1 = 0, n2 = 12;
    printf("\n%d x %d = %d\n", n1, n2, MultiplyTwoNum(n1, n2));
    return 0;
}