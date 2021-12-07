/* Write a program in C to show how a function returning pointer.
Test Data :
Input the first number : 5
Input the second number : 6
Expected Output :

 The number 6 is larger.  */

#include <stdio.h>

int *FindLarger(int *num, int *num1)
{
    if (*num > *num1)
        return num;
    else
        return num1;
}

int main()
{
    int n1, n2, *result;
    printf("Input the first number: ");
    scanf("%d", &n1);

    printf("Input the second number: ");
    scanf("%d", &n2);

    result = FindLarger(&n1, &n2);
    printf("The number %d is lsrger.", *result);
}