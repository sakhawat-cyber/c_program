/* 
Write a C programming to check whether a given number with base b (2 <= b<= 10) is a Niven number or not.
From Wikipedia,
In recreational mathematics, a harshad number (or Niven number) in a given number base, is an integer that is divisible by the sum of its digits when written in that base. Harshad numbers in base n are also known as n-harshad (or n-Niven) numbers. Harshad numbers were defined by D. R. Kaprekar, a mathematician from India. The word "harshad" comes from the Sanskrit harṣa (joy) + da (give), meaning joy-giver. The term “Niven number” arose from a paper delivered by Ivan M. Niven at a conference on number theory in 1977. All integers between zero and n are n-harshad numbers.
The number 18 is a harshad number in base 10, because the sum of the digits 1 and 8 is 9 (1 + 8 = 9), and 18 is divisible by 9 (since 18/9 = 2, and 2 is a whole number).

Test Data
Input: base 10: Number 3
Output: 3 is a Niven Number
Input: base 10: Number 18
Output: 18 is a Niven Number
Input: base 10: Number 15
Output: 15 is not a Niven Number
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void Add(char n[], char n1[], int *n_length, int n1_length)
{
    int i, j = 0, n2;
    for (i = 0; i < *n_length && i < n1_length; i++)
    {
        n2 = n[i] + n1[i] + j;
        n[i] = n2 % 10;
        j = n2 / 10;
    }
    for (; i < *n_length; i++)
    {
        n2 = n[i] + j;
        n[i] = n2 % 10;
        j = n2 / 10;
    }
    for (; i < n1_length; i++)
    {
        n2 = n1[i] + j;
        n[i] = n2 % 10;
        j = n2 / 10;
        (*n_length)++;
    }
    if (j)
    {
        n[i] = j;
        (*n_length)++;
    }
}

void Multiple(char n[], int n1, int *length)
{
    int i, j = 0, n2;
    for (i = 0; i < *length; i++)
    {
        n2 = n[i] * n1 + j;
        j = n2 / 10;
        n[i] = n2 % 10;
    }
    for (; j; j /= 10)
    {
        n[i] = j % 10;
        (*length)++;
    }
}

char Divided(char n[], int n1, int length)
{
    int i, j = 0;
    for (i = length - 1; i >= 0; i--)
    {
        j = j % n1;
        j *= 10;
        j += n[i];
    }
    return j % n1;
}

int main()
{
    int base, i, j, n;
    char num[4][1024];
    int length[4];

    printf("Input the base and the number(spacrated by a space)(0 to exit): \n");
    scanf("%d", &base);
    while (base)
    {
        getchar();
        scanf("%s", num[0]);
        length[1] = strlen(num[0]);
        n = 0;
        for (i = 0; i < length[1]; i++)
        {
            num[1][length[1] - 1 - i] = num[0][i] - '0';
            n += num[1][length[1] - 1 - i];
            num[0][i] = 0;
            num[2][i] = 0;
        }
        num[0][0] = 1;
        length[0] = 1;
        length[2] = 1;
        for (i = 0; i < length[1]; i++)
        {
            for (j = 0; j < length[0]; j++)
            {
                num[3][j] = num[0][j];
            }
            length[3] = length[0];
            Multiple(num[3], num[1][i], length + 3);
            Add(num[2], num[3], length + 2, length[3]);
            Multiple(num[0], base, length);
        }
        if (Divided(num[2], n, length[2]))
        {
            printf("It is not a Niven number.\n");
        }
        else
        {
            printf("It is a niven number.\n");
            scanf("%d", &base);
        }
        return 0;
    }
}