/* Write a program in C to display the sum of the 
series [ 1+x+x^2/2!+x^3/3!+....]. 
Test Data :
Input the value of x :3
Input number of terms : 5
Expected Output :
The sum is : 16.375000 */

#include<stdio.h>
int main()
{
    float x, no_row, sum;
    int n, i;
    printf("Input the Value of X: ");
    scanf("%f", &x);

    printf("Input number of terms: ");
    scanf("%d", &n);

    no_row = 1, sum = 1;
    for(i = 1; i <= n; i++)
    {
        no_row = no_row * x / (float)i;
        sum = sum + no_row;
    }
    printf("\nThe Sum is: %f\n", sum);
}
