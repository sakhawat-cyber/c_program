/* 
 Write a program in C to check whether a number is Lychrel number or not. Go to the editor

Expected Output :
Input a number: 196
The given number is Lychrel.
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool Palindrome(unsigned long long int i);
unsigned long long int Reverse(unsigned long long int i);
bool Lychrel(unsigned long long int i);

int main(void)
{
    unsigned long long int i = 0;
    int num;
    printf("Check whether a given number is a lychrel number or not: \n");
    printf("Input a number: ");
    scanf("%d", &num);
    if (Lychrel(num))
        printf("The given number is lychrel.\n");
    else
        printf("The given number is not lychrel.\n");
    return 0;
}

bool Lychrel(unsigned long long int i)
{
    int j;
    bool Lychrel = true;

    i = i + Reverse(i);
    for (j = 1; j <= 30; j++)
    {
        if (Palindrome(i))
        {
            Lychrel = false;
            break;
        }
        i = i + Reverse(i);
    }
    return Lychrel;
}

unsigned long long int Reverse(unsigned long long int i)
{
    unsigned long long int temp = 0;
    while (i != 0)
    {
        temp *= 10;
        temp += i % 10;
        i /= 10;
    }
    return temp;
}

bool Palindrome(unsigned long long int i)
{
    return (i == Reverse(i));
}