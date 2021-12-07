/*  Write a C program to calculate the root of a Quadratic 
Equation.
Test Data : 1 5 7
Expected Output :
Root are imaginary;
No solution. */

#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c, d;
    float x1, x2;
    printf("Input number: ");
    scanf("%d %d %d", &a, &b, &c);
 
    d = b * b - 4 * a * c;

    if(d == 0)  
    { 
        printf("Frist  Root Root1 = %f\n", x1);
        printf("Second Root Root2 = %f\n", x2);
    }
    else if(d > 0)
    {
        printf("Boot roots are real and diff - 2\n");
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        printf("First Root Root1 = %f\n", x1);
        printf("Second Root Root2 = %f\n", x2);
    }
    else
    {
        printf("Root are Imeaginary;\nNo Solution.\n");
    }
    return 0;
}