/*  Write a program in C to display n terms of natural number and their sum.
Test Data : 7
Expected Output :
The first 7 natural number is :
1 2 3 4 5 6 7
The Sum of Natural Number upto 7 terms : 28 */

#include<stdio.h>
int main()
{
    int n1, sum = 1;
    printf("Input a number: ");
    scanf("%d", &n1);

    for(int i = 2; i <= n1; i++)
    {
        sum = sum + i;
    }
    printf("The Sum of Natural Number up to 7 terms: %d",sum);
    return 0;
}