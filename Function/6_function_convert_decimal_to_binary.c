/*
Write a program in C to convert decimal number to binary number using the function.
Test Data :
Input any decimal number : 65
Expected Output :

 The Binary value is : 1000001 
*/

#include<stdio.h>
long ConvertBinary(int);

int main()
{
    long n;
    int decimal_no;
    printf("Input any decimal number: ");
    scanf("%d", &decimal_no);
    n = ConvertBinary(decimal_no);
    printf("\nThe Binary value is: %ld\n", n);

}

long ConvertBinary(int dec_no)
{
    long bin_no = 0, remainder, fun = 1;
while(dec_no != 0)
{
    remainder = dec_no % 2;
    bin_no = bin_no + remainder * fun;
    fun = fun * 10;
    dec_no = dec_no / 2;
}
return bin_no;
}