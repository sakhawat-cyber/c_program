/* Write a C program to check whether a given number is positive or negative.
Test Data : 15
Expected Output :
15 is a positive number */

#include<stdio.h>
int main()
{
    int n1 = 15, neg = 0;
    if(n1 > 0)
    {
        printf("15 is a positive number");
        neg ++;
    }
    return 0;
}