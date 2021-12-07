/*
Write a program in C to find GCD of two numbers using recursion.
Test Data :
Input 1st number: 10
Input 2nd number: 50
Expected Output :

The GCD of 10 and 50 is: 10 
*/

#include <stdio.h>
int GCDNumber(int n1, int n2);
int main()
{
    int n1, n2;
    printf("\nInput 1st number: ");
    scanf("%d", &n1);
    printf("Input 2nd number: ");
    scanf("%d", &n2);
    printf("The GCD of %d and %d is: %d\n\n", n1, n2, GCDNumber(n1, n2));
}
int GCDNumber(int n1, int n2)
{
    while (n1 != n2)
    {
        if (n1 > n2)
            return GCDNumber(n1 - n2, n2);
        else
            return GCDNumber(n1, n2 - n1);
    }
    return n1;
}