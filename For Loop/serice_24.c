/* Write a program in C to find the sum 
of the series [ x - x^3 + x^5 + ......].
Test Data :
Input the value of x :2
Input number of terms : 5
Expected Output :
The values of the series:
2
-8
32
-128
512
The sum = 410 */

#include<stdio.h>
#include<math.h>
void main()
{
    int x, ctr, sum; 
    int n, i, mm, nn, m;
    printf("Input the value of X: ");
    scanf("%d",&x);

    printf("Input number of terms: ");
    scanf("%d", &n);

    sum = x; m = -1;
    printf("The values of the series: \n");
    printf("%d\n", x);

    for(i = 1; i < n; i ++)
    {
        ctr = (2 * i + 1);
        mm = pow(x, ctr);
        nn = mm * m;

        printf("%d \n",nn);

        sum = sum + nn;
        m = m * (-1);
    }
    printf("\nThe sum = %d\n", sum);
}