/*
Write a program in C to calculate the sum of numbers from 1 to n using recursion. 
Test Data :
Input the last number of the range starting from 1 : 5
Expected Output :

The sum of numbers from 1 to 5 : 
15
*/

#include <stdio.h>
int SumRange(int);

int main()
{
    int n, sum;
    printf("\nInput the last number of the range starting from 1: ");
    scanf("%d", &n);
    sum = SumRange(n);
    printf("The Sum of numbers from 1 to %d: %d\n\n", n, sum);
}

int SumRange(int n)
{
    int result;
    if (n == 1)
        return 1;
    else
        //calling function sum of range it self
        result = n + SumRange(n - 1);
    return result;
}