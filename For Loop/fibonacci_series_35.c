/* Write a program in C to display the 
first n terms of Fibonacci series.
Fibonacci series 0 1 2 3 5 8 13 .....
Test Data :
Input number of terms to display : 10
Expected Output :
Here is the Fibonacci series upto to 10 terms :
0 1 1 2 3 5 8 13 21 34 */

#include <stdio.h>
int main()
{
    int n, count = 0, fibo, first = 0, second = 1;
    printf("Input number of terms to display: ");
    scanf("%d", &n);

    printf("Here is the fibonacci series up to 10 terms: ");
    while (count < n)
    {
        if (count <= 1)
            fibo = count;
        else
        {
            fibo = first + second;
            first = second;
            second = fibo;
        }
        printf("%d ", fibo);
        count++;
    }
}