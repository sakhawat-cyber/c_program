/*  Write a C program to generate a random number. 

Test Data and Expected Output :

Guess the number (1 to 10): 6                                           
The number is higher                                                    
                                                                        
Guess the number (1 to 10): 7                                           
That is correct! */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, input;
    // initialize random seed
    srand(time(NULL));

    //Generate a random number
    number = rand() % 10 + 1;
    do
    {
        printf("\nGuess the number (1 to 10): ");
        scanf("%d", &input);
        if (number > input)
            printf("The number is higer\n");
    } while (number != input);
    printf("That is correct!\n\n");
    return 0;
}