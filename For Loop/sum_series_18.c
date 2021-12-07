/* Write a program in C to find the sum of the series 
[ 1-X^2/2!+X^4/4!- .........].
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
    float x, fac = 1.00, num = 1.00, t, s;
    int n, i, j, y = 2, m = 1;
    printf("Input the Value: ");
    scanf("%f",&x);

    printf("Input the number of terms: ");
    scanf("%d",&n);


    for(i = 1; i < n; i++)
    {
        for(j = 1; j <= y; j++)
        {
            fac = fac * j;
            num = num * x;
        }

        m = m * (-1);
        num = num * m;
        t = num / fac;

        s = s + t;
        y = y + 2;
        
        num = 1.00;
        fac = 1.00; 
    }
    printf("\nThe sum = %f\nNumber of terms = %d\
    \nValue of X = %f\n", s, n, x);
}