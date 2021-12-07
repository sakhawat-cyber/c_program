/* Write a program in C to read any day number in integer and display day name in the word.
Test Data :
4
Expected Output :
Thursday 8 */

#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    switch(num)
    {
        case 1: 
            printf("Suterday.");
            break;

        case 2:
            printf("Sunday.");
            break;

        case 3:
            printf("Monday.");
            break;

        case 4:
            printf("Thursday.");
            break;

        case 5:
            printf("Wensday.");
            break;

        case 6:
            printf("Trusday.");
            break;

        case 7:
            printf("Fryday.");
            break;

        default:
            printf("Input number is invalid.");
            break;
    }
}