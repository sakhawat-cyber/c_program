/* 
Write a program in C to find the Deficient numbers (integers) between 1 to 100. Go to the editor

Expected Output :
The Deficient numbers between 1 to 100 are:
------------------------------------------------
1 2 3 4 5 7 8 9 10 11 13 14 15 16 17 19 21 22 23 25 26 27...
*/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int GetSum(int n)
{
    int i, sum = 0;
    for (i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
                sum = sum + i;
            else
            {
                sum = sum + i;
                sum = sum + (n / i);
            }
        }
    }
    sum = sum - n;
    return sum;
}

bool CheckDeficient(int n)
{
    return (GetSum(n) < n);
}

int main()
{
    int n, num = 0;
    printf("\nThe dificient numbers between 1 to 100 are: \n");
    for (int j = 1; j <= 100; j++)
    {
        n = j;
        if (CheckDeficient(n) == true)
        {
            printf("%d ", n);
            num++;
        }
    }
    printf("\nThe total number of dificient numbers are: %d\n", num);
}