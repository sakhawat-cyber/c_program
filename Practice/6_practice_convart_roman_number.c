/*
Write a C program to convert a
given integer to roman number. 


Roman numerals are represented by seven
different symbols:
I, V, X, L, C, D and M.
Symbol Value
I 1
V 5
X 10
L 50
C 100
D 500
M 1000
Expected Output:
Original integer: 12
Roman number of the said integer: XII
*/

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

static void num_char(char **num, int bit, int n)
{
    int i;
    char low, high, mid;
    char *ptr = *num;

    switch (n)
    {
    case 2:
        low = 'C';
        mid = 'D';
        high = 'M';
        break;
    case 1:
        low = 'X';
        mid = 'L';
        high = 'C';
        break;
    case 0:
        low = 'I';
        mid = 'V';
        high = 'X';
        break;
    }
    if(bit > 0)
        switch(bit)
        {
        case 1:
    case 2:
    case 3:
        for (i = 0; i < bit; i++)
            *ptr++ = low;
        break;
    case 4:
        *ptr++ = low;
        *ptr++ = mid;
        break;
    case 5:
        *ptr++ = mid;
        break;
    case 6:
    case 7:
    case 8:
        *ptr++ = mid;
        for (i = 5; i < bit; i++)
            *ptr++ = low;
        break;
    case 9:
        *ptr++ = low;
        *ptr++ = high;
        break;
    }
    *num = ptr;
}

static char roman_nummeral[64];

static char *intRoman(int num)
{
    char *ptr = &roman_nummeral[0];
    int thousand_bit_num = num / 1000;
    int hundred_bit_num = (num % 1000) / 100;
    int ten_bit_num = (num % 100) / 10;
    int one_bit_num = num % 10;
    int i;
    memset(roman_nummeral, 0, sizeof(roman_nummeral));
    if (thousand_bit_num > 0)
    {
        if (thousand_bit_num < 4)
        {
            for (i = 0; i < thousand_bit_num; i++)
                *ptr++ = 'M';
        }
    }
    num_char(&ptr, hundred_bit_num, 2);
    num_char(&ptr, ten_bit_num, 1);
    num_char(&ptr, one_bit_num, 0);

    return roman_nummeral;
}

int main()
{
    int n = 12;
    printf("\nOriginal integer: %d\n", n);
    printf("\nRoman number of the said integer: %s\n\n", intRoman(n));
    return 0;
}