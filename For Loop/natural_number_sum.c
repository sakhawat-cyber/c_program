/* Write a C program to find the sum of first 10 natural numbers.
Expected Output :
The first 10 natural number is :
1 2 3 4 5 6 7 8 9 10
The Sum is : 55 */

#include<stdio.h>
int main()
{
    int n1, sum = 1;
    printf("Input a number: ");
    scanf("%d", &n1);

    for(int i = 2; i <= n1; i++)
    {
        sum = sum + i;
    }
    printf("The sum is: %d", sum);
    return 0;
}