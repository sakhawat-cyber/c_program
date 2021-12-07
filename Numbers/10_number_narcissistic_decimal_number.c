/* 
Write a program in C to generate and show the first 15 narcissistic decimal numbers.

Expected Output :
The first 15 narcissistic decimal numbers are:
1 2 3 4 5 6 7 8 9 153 370 371 407 1634 8208
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int i, num, qrn, sum, qaz, n;
    printf("The first narcissistic decimal numbers are: ");
    qrn = 1;
    for (i = 1; i <= 15;)
    {
        num = 0;
        sum = 0;
        n = qrn;
        while (n > 0)
        {
            n = n / 10;
            num++;
        }
        n = qrn;
        while (n > 0)
        {
            qaz = n % 10;
            sum = sum + pow(qaz, num);
            n = n / 10;
        }
        if (sum == qrn)
        {
            printf("%d ", qrn);
            i++;
        }
        qrn++;
    }
    printf("\n");
}