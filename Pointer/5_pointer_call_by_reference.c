/* Write a program in C to add numbers using call by reference.
Test Data :
Input the first number : 5
Input the second number : 6
Expected Output :

 The sum of 5 and 6  is 11  */

#include <stdio.h>
long AddTwoNumber(long *, long *);

int main()
{
    long num1, num, sum;
    printf("Input the first number: ");
    scanf("%d", &num);

    printf("Input the first number: ");
    scanf("%d", &num1);

    sum = AddTwoNumber(&num, &num1);

    printf("The sum of %d and %d is %d", num, num1, sum);
    return 0;
}

long AddTwoNumber(long *n, long *n1)
{
    long sum;
    sum = *n + *n1;
    return sum;
}