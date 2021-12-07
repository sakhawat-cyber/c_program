/* Write a c program to find the perfect numbers within a given number of range.
Test Data :
Input the starting range or number : 1
Input the ending range of number : 50
Expected Output :
The Perfect numbers within the given range : 6 28 */

/*Perfect number is a positive number which sum of all positive divisors excluding 
that number is equal to that number. For example 6 is perfect number since divisor of 6 are 1, 2 and 3.  
Sum of its divisor is 1 + 2+ 3 = 6*/

#include<stdio.h>
void main()
{
    int n, n1, i, j, sum;
    printf("Input the starting range of number: ");
    scanf("%f", &n);

    printf("Input the ending range of number: ");
    scanf("%d", &n1);

    printf("The Perfect number winthin the given range: ");
    for(i = n; i <= n1; i++)
    {
        j = 1; sum = 0; 
        while(j < i)
        {
            if(i % j == 0)
                sum = sum + j;
            j++;
        }
        /* if((n % i == 0) && (n1 % i == 0))
        {
            sum = sum + i;
            printf("%d", i);
        } */
        if(sum == i)
            printf("%d ", i);
    }
    printf("\n");
}