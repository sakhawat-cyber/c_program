/*
Write a program in C to find the Factorial of a number using recursion. 
Test Data :
Input a number : 5
Expected Output :

The Factorial of 5 is : 120
*/

#include <stdio.h>
int FactorialNumber(int n1);
int main()
{
    int n, fact;
    printf("\nInput a number: ");
    scanf("%d", &n);
    fact = FactorialNumber(n);
    printf("The factorial of %d is: %d\n\n", n, fact);
}

int FactorialNumber(int n1)
{
    if (n1 == 1)
        return 1;
    else
        //calling the function factorial number it self
        return (n1 * FactorialNumber(n1 - 1));
}