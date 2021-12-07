/*
Write a program in C to print even or odd numbers in given range using recursion.
Test Data :
Input the range to print starting from 1 : 10
Expected Output :

All even numbers from 1 to 10 are : 2  4  6  8  10                              
All odd numbers from 1 to 10 are : 1  3  5  7  9   
*/

#include <stdio.h>
void EvenOdd(int value, int n);
int main()
{
    int n;
    printf("\nInput range to print starting from 1: ");
    scanf("%d", &n);
    printf("All even number from 1 to %d are: \n", n);
    //call the function EvenOdd for even numbers
    EvenOdd(2, n);
    printf("All even number from 1 to %d are: \n\n", n);
    //call the function EvenOdd for odd numbers
    EvenOdd(1, n);
    return 0;
}

void EvenOdd(int value, int n)
{
    if (value > n)
        return;
    printf("%d ", value);
    //calling the function evenodd it self recursively
    EvenOdd(value + 2, n);
}