/* 
Write a program in C to find narcissistic decimal numbers within a specific range.

Expected Output :
Input the lower limit: 100
Input a upper limit: 1000
The narcissistic decimal numbers between 100 and 1000 are:
153 370 371 407
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n1, n2, n, i, sum, num;
    printf("Input the lower limit: ");
    scanf("%d", &n1);
    printf("Input a upper limit: ");
    scanf("%d", &n2);
    printf("The narcissistic decimal number between %d and %d are: \n", n1, n2);
    for (i = n1; i <= n2; i++)
    {
        num = 0;
        sum = 0;
        n = i;
        while (n > 0)
        {
            n = n / 10;
            num++;
        }
        n = i;
        while (n > 0)
        {
            n1 = n % 10;
            sum = sum + pow(n1, num);
            n = n / 10;
        }
        if (sum == i)
            printf("%d ", i);
    }
}