/* 
 Write a program in C to check if a number is Keith or not(with explanation).

Expected Output :
Input a number : 1537
1 + 5 + 3 + 7 = 16
5 + 3 + 7 + 16 = 31
3 + 7 + 16 + 31 = 57
7 + 16 + 31 + 57 = 111
16 + 31 + 57 + 111 = 215
31 + 57 + 111 + 215 = 414
57 + 111 + 215 + 414 = 797
111 + 215 + 414 + 797 = 1537
The given number is a Keith Number.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int LengthCount(int n)
{
    int num = 0;
    while (n > 0)
    {
        n = n / 10;
        num++;
    }
    return num;
}

int main()
{
    int n = 0, i = 0, arr[10], n1 = 0, num = 0, sum = 0, k, j;
    printf("Input a number: ");
    scanf("%d", &n);
    n1 = n;
    for (i = LengthCount(n1) - 1; i >= 0; i--)
    {
        arr[i] = n % 10;
        n /= 10;
    }
    while (num == 0)
    {
        for (i = 0; i < LengthCount(n1); i++)
            sum += arr[i];
        if (sum == n1)
        {
            num = 1;
            k = 1;
        }
        if (sum > n1)
        {
            num = 1;
            k = 0;
        }
        for (i = 0; i < LengthCount(n1); i++)
        {
            printf("%d", arr[i]);
            if (i != LengthCount(n1) - 1)
            {
                arr[i] = arr[i + 1];
                printf(" + ");
            }
            else
            {
                arr[i] = sum;
                printf("= %d", arr[i]);
            }
        }
        printf("\n");
        sum = 0;
    }
    if (k == 1)
        printf("The given number is a Keith Number.");
    if (k == 0)
        printf("The given number is not a keith number.\n");
}