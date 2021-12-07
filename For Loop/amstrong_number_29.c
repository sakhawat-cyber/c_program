/* Write a C program to check whether a given number is an armstrong number or not.
Test Data :
Input a number: 153
Expected Output :
153 is an Armstrong number. */

#include<stdio.h>
int main()
{
    int n, temp, r, sum = 0;
    printf("Input a number: ");
    scanf("%d", &n);
    temp = n;

    while(temp != 0)
    {
        r = temp % 10;
        sum = sum + r * r * r;
        temp = temp / 10;
    }
    if(sum == n)
        printf("Armstrong Number.");
    else
        printf("This is not Armstrong Number.");
}