/*
Write a C program to reverse digits of a given a 32-bit signed integer. Go to the editor
Expected Output:

Original integer:          123
Reverse integer :          321
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

static int reverse (int n)
{
    int n1, num = 0;
    while (n != 0)
    {
        n1 = n % 10;
        if(num > INT_MAX / 10 || num < INT_MIN / 10)
        return 0;
        num = num * 10 + n1;
        n /= 10;
    }
    return num;
}

int main()
{
    int n= 123;
  
    printf("\nOriginal integer: %d", n);
    printf("\nReverse integer: %d\n\n", reverse(n));
    return 0;
}