/*  Write a program in C to find the factorial of a given number using pointers.
Test Data :
Input a number : 5
Expected Output :

The Factorial of 5 is : 120  */

#include <stdio.h>
void Fact(int, int *);
int main()
{
    int n, fact;
    printf("Input a number: ");
    scanf("%d", &n);
    Fact(n, &fact);

    printf("The factorial of %d is : %d", n, fact);
    return 0;
}

void Fact(int n, int *f)
{
    int i;
    *f = 1;
    for (i = 1; i <= n; i++)
        *f = *f * i;
}