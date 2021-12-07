/* 
Write a program in C to check whether a given number is an ugly number or not.

Expected Output :
Input an integer number: 25
It is an ugly number. 
*/

#include <stdio.h>
int main()
{
    int num, x = 0;

    printf("Input an integer number: ");
    scanf("%d", &num);
    if (num <= 0)
    {
        printf("Input a correct number.");
    }

    while (num != 1)
    {
        if (num % 5 == 0)
            num /= 5;
        else if (num % 3 == 0)
            num /= 3;
        else if (num % 2 == 0)
            num /= 2;
        else
        {
            printf("It is not an ugly number.\n");
            x = 1;
            break;
        }
    }
    if (x == 0)
        printf("It is an ugly number.");
}