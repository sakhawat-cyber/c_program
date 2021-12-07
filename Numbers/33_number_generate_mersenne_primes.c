/* 
Write a program in C to generate mersenne primes within a range of numbers. Go to the editor

Expected Output:
Input a upper limit [range from 1 to upper limit]: 1000
Mersenne prime numbers are:
3 7 31 127
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

void GenerateAllPrime(int n1, bool arr[])
{
    int i, j;
    for (i = 0; i <= n1; i++)
        arr[i] = true;
    for (j = 2; j * j <= n1; j++)
    {
        if (arr[j] == true)
        {
            for (i = j * 2; i <= n1; i += j)
                arr[i] = false;
        }
    }
}

bool CheckMersennePrime(int num)
{
    bool arr1[num + 1];
    int j;

    GenerateAllPrime(num, arr1);
    for (j = 2; ((1 << j) - 1) <= num; j++)
    {
        long long num = (1 << j) - 1;
        if (arr1[num])
            printf("%lli ", num);
    }
}

int main()
{
    int n;
    printf("Input a upper limit [range from 1 to upper limit]: ");
    scanf("%d", &n);
    printf("Mersenne prime number are: ");
    CheckMersennePrime(n);
}