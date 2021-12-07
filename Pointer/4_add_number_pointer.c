/* Write a program in C to add two numbers using pointers.
Test Data :
Input the first number : 5
Input the second number : 6
Expected Output :

The sum of the entered numbers is : 11  */

#include <stdio.h>
int main()
{
    int num, num1, *p, *q, sum;
    printf("Input the first number: ");
    scanf("%d", &num);

    printf("Input the second number: ");
    scanf("%d", &num1);
    p = &num;
    q = &num1;
    sum = *p + *q;
    printf("The sum of the entered number is: %d", sum);
    return 0;
}