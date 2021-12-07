/*
Write a program in C to find the sum of digits of a number using recursion.
Test Data :
Input any number to find sum of digits: 25
Expected Output :

The Sum of digits of 25 = 7 
*/

#include <stdio.h>
int SumDigit(int n1);
int main()
{
    int n;
    printf("\nInput any number to find sum of digit: ");
    scanf("%d", &n);

    printf("The sum of digit %d = %d\n\n", n, SumDigit(n));
}
int SumDigit(int n1)
{
    if (n1 == 0)
        return 0;
    //calling the function digit sum it self
    return ((n1 % 10) + SumDigit(n1 / 10));
}