/* 
Write a program in C to print all perfect numbers in given range using the function.
Test Data :
Input lowest search limit of perfect numbers : 1
Input lowest search limit of perfect numbers : 100
Expected Output :

The perfect numbers between 1 to 100 are : 6   28  
*/

#include <stdio.h>
//function declaration

int CheckPerfect(int n);
void PerfectNumber(int num1, int num2);

int main()
{
    int n1, n2;
    printf("\n\nInput lowest search limit of perfect number: ");
    scanf("%d", &n1);
    printf("Input lowest search limit of perfect number: ");
    scanf("%d", &n2);
    printf("The perfect numbers between 1 to 100 are: \n");
    PerfectNumber(n1, n2);
}

int CheckPerfect(int n)
{
    int i, sum = 0;
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum += i;
    }
    /*if sum of proper positive divisors equals to given number
then the number is perfect number.*/
    if (sum == n)
        return 1;
    else
        return 0;
}

void PerfectNumber(int num1, int num2)
{
    /*print perfect number from start to end*/
    while (num1 <= num2)
    {
        if (CheckPerfect(num1))
            printf("%d ", num1);
        num1++;
    }
}
