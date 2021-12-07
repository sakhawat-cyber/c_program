/*
Write a program in C to find the Hailstone Sequence of a given number upto 1. 
Test Data :
Input any number (positive) to start for Hailstone Sequence : 13
Expected Output :

 The hailstone sequence starting at 13 is :                                                                   
 13  40  20  10  5  16  8  4  2 1                                                                             
 The length of the sequence is 10.
 */

#include <stdio.h>

//function to generate next number
int GetNextNumber(int num)
{
    int i = num;
    if (i % 2 == 0)
        i = i / 2;
    else
        i = 3 * i + 1;
    //returning the vlaue of next number to the called function
    return (i);
}

//function to generate hailstone number
void GetHailstone(int num1)
{
    int hail = num1;
    if (hail == 1)
        printf("%i ", hail);
    else
    {
        printf("%i ", hail);
        //calling the function it self recursively
        GetHailstone(GetNextNumber(hail));
    }
}

//funcation to count the length of the hailstone sequense
int CountLength(int num2)
{
    int hail = num2;
    if (hail == 1)
        return 1;
    else
        //calling the function it self recursively
        return 1 + CountLength(GetNextNumber(hail));
}

int main()
{
    int n;
    printf("\nInput any number (positive) to start for hailstone sequence: ");
    scanf("%d", &n);

    printf("The hailstone sequence starting at %d is: \n", n);
    GetHailstone(n);
    printf("\nThe length of the sequence is %i\n\n", CountLength(n));
    return 0;
}