/* 
Write a program in C to find Harshad Number between 1 to 100.

Expected Output :
The Harshad Numbers are: 1 2 3 4 5 6 7 8 9 10 12 18 20 21 24 27 30 36 40 42 45 48 50 54 60 63 70 72 80 81 84 90 100
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool CheckHarshad(int n)
{
    int sum = 0, temp;
    for (temp = n; temp > 0; temp /= 10)
        sum += temp % 10;
    return (n % sum == 0);
}

int main()
{
    int i;
    printf("The harshad number are: \n");
    for (i = 1; i <= 100; i++)
    {
        if (CheckHarshad(i))
            printf("%d ", i);
    }
}