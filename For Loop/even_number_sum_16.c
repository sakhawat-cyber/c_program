/* Write a program in C to display the n terms of even natural number and their sum.
Test Data :
Input number of terms : 5
Expected Output :
The even numbers are :2 4 6 8 10
The Sum of even Natural Number upto 5 terms : 30 */

#include<stdio.h>
int main()
{
    int num, i, sum = 0;
    printf("Input number of terms: ");
    scanf("%d",&num);

    printf("The even number are: ");
    for(i = 1; i <= num; i++)
    {
        if(i % 2 == 0)
        {
           printf("%d ", i);
            sum += i; 
        }
    }
    printf("\nThe Sum of even Natrul upto 5 terms: %d", sum);
}