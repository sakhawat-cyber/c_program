/*
 Write a program in C to convert a decimal number to binary using recursion.
Test Data :
Input any decimal number : 66
Expected Output :

The Binary value of decimal no. 66 is : 1000010    
*/

#include <stdio.h>
long DecimalToBinary(int n);

int main()
{
    int convert, n;

    printf("\nInput any decimal number: ");
    scanf("%d", &n);
    convert = DecimalToBinary(n);
    printf("The binary value of decimal no %d is: %d\n\n", n, convert);
}

long DecimalToBinary(int decimal_no)
{
    static int binary_no, n, factor = 1;
    if (decimal_no != 0)
    {
        n = decimal_no % 2;
        binary_no = binary_no + n * factor;
        factor = factor * 10;
        //calling the function decimal to binary it self
        DecimalToBinary(decimal_no / 2);
    }
    return binary_no;
}

