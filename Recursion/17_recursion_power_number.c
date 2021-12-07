/*
Write a program in C to calculate the power of any number using recursion.
Test Data :
Input the base value : 2
Input the value of power : 6
Expected Output :

The value of 2 to the power of 6 is : 64 
*/

#include <stdio.h>
long int CalculatePower(int x, int y)
{
    long int result = 1;
    if (y == 0)
        return result;
    //calling the function culclatepower it self recurcively
    result = x * (CalculatePower(x, y - 1));
}

int main()
{
    int base, power;
    long int result;

    printf("\nInput the base value: ");
    scanf("%d", &base);
    printf("Input the value of power: ");
    scanf("%d", &power);

    //called the function calcupower
    result = CalculatePower(base, power);
    printf("The value of %d to the power of %d is: %d\n\n", base, power, result);
}