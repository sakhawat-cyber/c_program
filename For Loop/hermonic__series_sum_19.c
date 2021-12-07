/* Write a program in C to display the n terms of 
harmonic series and their sum.
1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms
Test Data :
Input the number of terms : 5
Expected Output :
1/1 + 1/2 + 1/3 + 1/4 + 1/5 +
Sum of Series upto 5 terms : 2.283334 */

#include<stdio.h>
int main()
{
    int n, i;
    float sum;
    printf("Input the number of terms: ");
    scanf("%d", &n);

    printf("1 / 1 + 1 / 2 + 1 / 3 + 1 / 4 + 1 / 5 + \n");
    for(i = 1; i <= 5; i++)
    {
        float serise = 1.0 / i;
        sum = sum + serise;
    }
    printf("Sum of Series upto 5 terms: %f", sum);
}