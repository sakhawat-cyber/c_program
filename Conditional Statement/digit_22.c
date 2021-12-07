/* Write a program in C to read any digit, display in the word.
Test Data :
4
Expected Output :
Four */

#include<stdio.h>
int main()
{
    int num;
    printf("Input number: ");
    scanf("%d", &num);

    switch(num)
    {
        case 1: 
            printf("One.");
            break;

        case 2:
            printf("Two.");
            break;

        case 3:
            printf("Three.");
            break;

        case 4:
            printf("Four.");
            break;

        case 5:
            printf("Five.");
            break;

        case 6:
            printf("Six.");
            break;

        case 7: 
            printf("Seven.");
            break;

        case 8:
            printf("Eight.");
            break;

        case 9:
            printf("Nine.");
            break;
        
        default:
            printf("Invalid Number.\nPlase try again.");
            break;
    }
}