/* Write a program in C which is a Menu-Driven Program to perform a simple calculation.
Test Data :
10
2
3
Expected Output :
The Multiplication of 10 and 2 is: 20 */

#include <stdio.h>
void main()
{
    int n1, n2, opt;
    printf("Enter the first Integer : ");
    scanf("%d", &n1);

    printf("Enter the second Integedr: ");
    scanf("%d", &n2);

    printf("\nInput your option: \n");
    printf("\n1 - Addition.\n2 - Subtraction.\n3 - Multiplecation.\n4 - Divition.\n5 - Exit.\n");
    scanf("%d",&opt);

    switch(opt)
    {
        case 1:
            printf("The addition of %d and %d is: %d", n1, n2, n1 + n2);
            break;
        
        case 2: 
            printf("The Subtraction of %d and %d is: %d", n1, n2, n1 - n2);
            break;

         case 3: 
            printf("The Multiplecation of %d and %d is: %d", n1, n2, n1 * n2);
            break;

         case 4: 
            if(n2 == 0)
                printf("The second integer is zero. Devided by zero.\n");
            else 
                printf("The Division of %d and %d is: %d", n1, n2, n1 / n2);
            break;

        case 5: 
            break;
        
        default: 
            printf("Input corret option\n");
            break;
    }
}