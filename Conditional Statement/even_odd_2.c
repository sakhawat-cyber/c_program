/* Write a C program to check whether a given number is even or odd.
Test Data : 15
Expected Output :
15 is an odd integer */

#include<stdio.h>
int main()
{
    int n1 = 15;
    if(n1 / 2 != 0)
        printf("15 is an odd integer");
    else
        printf("15 is an even number");
    
    return 0;
}