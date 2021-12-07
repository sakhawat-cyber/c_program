/* Write a C program to find the difference between the largest integer and the
 smallest integer, which are created by 8 numbers from 0 to 9. The number that 
 can be rearranged shall start with 0 as in 00135668.

Input:
Data is a sequence of 8 numbers (digits from 0 to 9).
Output:
The difference between the largest integer and the smallest integer.

Input an integer created by 8 numbers (0 to 9):
25346879

The difference between the largest integer and the smallest integer.
98765432 - 23456789 = 75308643 */

#include <stdio.h>
int main()    
{
    int num, temp;
    int max_val = 0;
    int min_val = 0;

    printf("Input an integer created by 8 numbers (0 to 9):\n");
    scanf("%d", &num);

    int i, j, sub[8] = {0};
    for (i = 0; num != 0; i++)
    {
        sub[i] = num % 10;
        num /= 10;
    }

    for (i = 0; i < 8; i++)
    {
        for (j = 1; j + i < 8; j++)
        {
            if (sub[j - 1] < sub[j])
            {
                temp = sub[j - 1];
                sub[j - 1] = sub[j];
                sub[j] = temp;
            }
        }
    }

    max_val = 0;
    for (i = 0; i < 8; i++)
    {
        max_val *= 10;
        max_val += sub[i];
    }

    for (i = 0; i * 2 < 8; i++)
    {
        temp = sub[i];
        sub[i] = sub[7 - i];
        sub[7 - i] = temp;
    }

    min_val = 0;
    for (i = 0; i < 8; i++)
    {
        min_val *= 10;
        min_val += sub[i];
    }
    printf("The difference between the largest integer and the smallest integer.\n");
    printf("%d - %d = %d\n\n", max_val, min_val, max_val - min_val);
}