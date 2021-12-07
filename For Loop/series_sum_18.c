/*  Write a program in C to find the sum of the 
series [ 1-X^2/2!+X^4/4!- .........].
Test Data :
Input the Value of x :2
Input the number of terms : 5
Expected Output :
the sum = -0.415873
Number of terms = 5
value of x = 2.000000 */

#include<stdio.h>

int main()
{
    float x, d, t = 1, sum = 1;
    int n, i;
    printf("Input the Value of X: ");
    scanf("%f", &x);

    printf("Input the number of terms: ");
    scanf("%d", &n);

    for(i = 1; i < n; i++)
    {
        d = (2 * i) * (2 * i - 1);
        t = - t * x * x / d;
        sum = sum + t;
    }
    printf("\nThe sum = %f\nNumber of terms = %d\
    \nValue of x = %f\n", sum, n, x);
}