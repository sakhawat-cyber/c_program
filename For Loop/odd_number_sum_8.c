/* Write a program in C to display the n terms of odd natural number and their sum .
Test Data
Input number of terms : 10
Expected Output :
The odd numbers are :1 3 5 7 9 11 13 15 17 19
The Sum of odd Natural Number upto 10 terms : 100 */

#include<stdio.h>
int main()
{
    int n1, sum = 0;
    printf("Input number of terms: ");
    scanf("%d", &n1);
    printf("The odd numbers are : ");
    for(int i = 1; i <= n1; i++)
    {
        printf("%d ", 2 * i - 1);
        sum = sum + 2 * i - 1;
        /* if(i % 2 != 0)
        {
            printf("%d ", i);
            sum = sum + i;
        }*/
    }

    printf("\nThe Sum of odd Natural Number upto terms: %d", sum);

}