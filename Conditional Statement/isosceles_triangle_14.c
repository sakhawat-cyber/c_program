/* Write a C program to check whether a triangle is 
Equilateral, Isosceles or Scalene.
Test Data :
50 50 60
Expected Output :
This is an isosceles triangle. */

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Input three number: ");
    scanf("%d %d, %d", &a, &b, &c);

    if(a == b && b == c) //check whether all sides are equal
        printf("This is an Equilateral triangle.");

    else if(a == b || b == c || c == a)
        printf("This is an Isosceles tringle.");

    else 
        printf("This is an Scalene tringle.");

    
}