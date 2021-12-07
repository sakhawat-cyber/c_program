/*  Write a C program to calculate profit and loss on a transaction.
Test Data :
500 700
Expected Output :
You can booked your profit amount : 200 */

#include<stdio.h>
int main()
{
    int cprice, sprice, plamt;

    printf("Input cost price: ");
    scanf("%d", &cprice);
    printf("Input selling price: ");
    scanf("%d", &sprice);

    if(sprice > cprice)
    {
        plamt = sprice - cprice;
        printf("You can booked your profit amount: %d",plamt);
    }

    else if(cprice > sprice)
    {
        plamt = cprice - sprice;
        printf("You got a loss of amount: %d",plamt);
    }
    else
        printf("\nYour are running in no profit no loss condition.\n");
}