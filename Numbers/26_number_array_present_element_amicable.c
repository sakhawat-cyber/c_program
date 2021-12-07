/* 
Write a program in C to count the amicable pairs in an array.

Expected Output :
Input the number of elements to be stored in the array: 4
element - 0: 220
element - 1: 274
element - 2: 1184
element - 3: 1210
Number of Amicable pairs presents in the array: 1
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int ProDivSum(int n)
{
    int i, sum = 1;
    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            sum += i;
            if (n / i != i)
                sum += n / i;
        }
    }
    return sum;
}

bool CheckAmicable(int a, int b)
{
    return (ProDivSum(a) == b && ProDivSum(b) == a);
}

int CheckPairs(int arr[], int num)
{
    int i, j, sum = 0;
    for (i = 0; i < num; i++)
    {
        for (j = i + 1; j < num; j++)
        {
            if (CheckAmicable(arr[i], arr[j]))
            sum++;
        }
    }
    return sum;
}

int main()
{
    int i, arr[20], n, n1;
    printf("Input the number of elements to be sorted in the array: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d: ", i);
        scanf("%d", &arr[i]);
    }
    n1 = sizeof(arr) / sizeof(arr[0]);
    printf("Number of amicable pairs presents in the array: %d", CheckPairs(arr, n1));
}