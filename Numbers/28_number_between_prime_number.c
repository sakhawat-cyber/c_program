/* 
Write a program in C to find circular prime numbers upto a specific limit. Go to the editor

Expected Output :
Enter the upper Limit: 1000
The Circular Prime Numbers less than 1000 are:
2 3 5 7 11 13 17 31 37 71 73 79 97 113 131 197 199 311 337 373 719 733 919 971 991
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int num;
void CheckPrime(long int n)
{
    long int i = n - 1;
    while (i >= 2)
    {
        if (n % i == 0)
            num = i;
        i--;
    }
}

void AllCombination(long int a)
{
    long int n1, x[8], i, j, y[8], n3, n2, n4, n5, n6, n7, n8;
    n1 = a;
    i = 0;
    while (n1 > 0)
    {
        x[i] = n1 % 10;
        n1 = n1 / 10;
        i++;
    }
    n2 = 0;
    for (j = i - 1; j >= 0; j--)
    {
        y[n2] = x[j];
        n2++;
    }
    n3 = i;
    while (n3 > 0)
    {
        n2 = n3 - 1;
        n4 = i - 1;
        n5 = 0;
        n6 = 0;
        while (n5 < i)
        {
            n7 = pow(10, n4);
            n8 = n7 * y[n2 % i];
            n2++;
            n4--;
            n5++;
            n6 = n6 + n8;
        }
        n3--;
        CheckPrime(n6);
    }
}

int main()
{
    long int n, i;

    printf("Enter the upper limit: ");
    scanf("%d", &i);
    printf("The Circular prime number number less than %d are: \n", i);

    for (n = 2; n <= i; n++)
    {
        num = 0;
        AllCombination(n);
        if (num == 0)
            printf("%li ", n);
    }
}