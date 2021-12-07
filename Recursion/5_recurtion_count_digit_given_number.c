/*
Write a program in C to count the digits of a given number using recursion. 
Test Data :
Input a number : 50
Expected Output :

The number of digits in the number is :  2
*/

#include <stdio.h>
int NoDigit(int num);
int main()
{
    int n;
    printf("\nInput a number: ");
    scanf("%d", &n);
    int n1 = NoDigit(n);
    printf("The number of digits in the number is: %d\n", n1);
}
int NoDigit(int num)
{
    static int n = 0;
    if (num != 0)
    {
        n++;
        NoDigit(num / 10);
    }
    return n;
}