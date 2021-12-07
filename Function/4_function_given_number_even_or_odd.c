/*
Write a program in C to check a given number is even or odd using the function.
Test Data :
Input any number : 5
Expected Output :

 The entered number is odd.  
 */

#include <stdio.h>
/*if the least siginficant bit is 1 the 
number is odd and 0 the number is even*/
int EvenOrOdd(int n)
{
    //the & operator does a bitwise and
    return (n & 1);
}

int main()
{
    int num;
    printf("\n\nInput any number: ");
    scanf("%d", &num);
    if (EvenOrOdd(num))
        printf("The entred %d number is odd.\n\n", num);
    else
        printf("The entered %d number is even.\n\n", num);
}