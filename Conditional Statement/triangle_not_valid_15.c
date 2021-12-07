/*  Write a C program to check whether a triangle can be formed by the given value for the angles.
Test Data :
40 55 65
Expected Output :
The triangle is not valid */

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Input the three number: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c && c == a)
        printf("The triangle is valid.");

    else
        printf("The triangle is not valid.");
}