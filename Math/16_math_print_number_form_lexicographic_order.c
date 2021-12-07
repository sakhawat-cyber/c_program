/*
Lexicographical order:
From Wikipedia,
In mathematics, the lexicographic or lexicographical order (also known as lexical order, dictionary order, alphabetical order or lexicographic(al) product) is a generalization of the way words are alphabetically ordered based on the alphabetical order of their component letters. This generalization consists primarily in defining a total order on the sequences (often called strings in computer science) of elements of a finite totally ordered set, often called an alphabet.
Write a C programming to print numbers from 1 to an given integer(N) in lexicographic order. 
Example:
Input: 10
Output:
Print numbers from 1 to 10 in lexicographic order-
1 10 2 3 4 5 6 7 8 9
Input: 25
Output:
Print numbers from 1 to 25 in lexicographic order-
1 10 11 12 13 14 15 16 17 18 19 2 20 21 22 23 24 25 3 4 5 6 7 8 9
*/

#include <stdio.h>
#include<math.h>
#include <stdlib.h>

void LexicographicOrder(int n)
{
    int n1, j, i = 1;
    printf("\n\nPrint number from 1 to %d in lexicographic order - \n", n);
    while (i <= 9)
    {
        j = 1;
        while (j <= n)
        {
            n1 = 0;
            while (n1 < j)
            {
                if ((n1 + j * i) <= n)
                    printf("%d ", n1 + j * i);
                n1 = n1 + 1;
            }
            j = j * 10;
        }
        i = i + 1;
    }
}

int main()
{
    LexicographicOrder(10);
    LexicographicOrder(25);
    LexicographicOrder(40);
    LexicographicOrder(100);
    return 0;
}