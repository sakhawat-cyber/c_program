/*
Write a program in C to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 using the function. 
Expected Output :

 The sum of the series is : 34
 */

#include <stdio.h>
int Fact(int);
int main()
{
    int num;
    num = Fact(1) / 1 + Fact(2) / 2 + Fact(3) / 3 + Fact(4) / 4 + Fact(5) / 5;
    printf("\nFind the sum of:\n1 !/ 1 + 2! / 2 + 3! / 3 + 4! / 4 + 5! / 5: ");
    printf("\nThe sum of the series is: %d\n\n", num);
}

int Fact(int n)
{
    int num = 0, fact = 1;
    while (num <= n - 1)
    {
        fact = fact + fact * num;
        num++;
    }
    return fact;
}