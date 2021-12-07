/* Write a program in C to find the maximum number between two numbers using a pointer.
Test Data :
Input the first number : 5
Input the second number : 6
Expected Output :

6 is the maximum number. */

#include<stdio.h>
int main()
{
    int num, num1, *ptr = &num, *ptr2 = &num1;
    printf("Input the first number: ");
    scanf("%d", &num);
    printf("Input the second number: ");
    scanf("%d", &num1);
    if(*ptr > *ptr2)
        printf("%d is the maximum number.", *ptr);
    else
     printf("%d is the maximum number.", *ptr2);
}

