/*  Write a program in C to read any Month Number in integer and display Month name in the word.
Test Data :
4
Expected Output :
April */ 

#include<stdio.h>
int main()
{
    int num;
    printf("Input number: ");
    scanf("%d", &num);

    switch(num)
    {
        case 1:
            printf("January.");
            break;

        case 2:
            printf("February.");
            break;

        case 3:
            printf("March.");
            break;

        case 4:
            printf("April.");
            break;

        case 5:
            printf("May.");
            break;
        
        case 6:
            printf("June.");
            break;

        case 7:
            printf("July.");
            break;

        case 8:
            printf("Augest.");
            break;

        case 9:
            printf("september.");
            break;

        case 10:
            printf("Actober.");
            break;

        case 11:
            printf("Nebembor.");
            break;

        case 12:
            printf("December.");
            break;

        default:
            printf("Invalid number.\nPlase try again;");
            break;
    }
}