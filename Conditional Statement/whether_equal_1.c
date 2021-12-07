/*  Write a C program to accept two integers and check whether they are equal or not.
Test Data : 15 15
Expected Output :
Number1 and Number2 are equal */

#include<stdio.h>
int main()
{
    int n1 = 15, n2 = 15;

    if(n1 == n2)
        printf("Number 1 and Number 2 are equal");
    else
        printf("Number 1 and Number 2 are not equal");
}