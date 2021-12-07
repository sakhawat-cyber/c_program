/*
Write a program in C to find the square of any number using the function.
Test Data :
Input any number for square : 20
Expected Output :

The square of 20 is : 400.00
*/

#include <stdio.h>

double Square(double num)
{
    return (num * num);
}

int main()
{
    int num;
    double n;
    printf("\n\nInput any number for squre: ");
    scanf("%d", &num);
    n = Square(num);
    printf("The square of %d is: %.2f\n\n", num, n);
}