/*  Write a C program to read the age of a candidate and determine whether it is eligible for casting his/her own vote.
Test Data : 21
Expected Output :
Congratulation! You are eligible for casting your vote. */

#include<stdio.h>
int main()
{
    int num;
    printf("Input a number: ");
    scanf("%d", &num);
    if(num < 18)
    {
        printf("Sorry, You not elegible to caste your vote.\n");
        printf("You would be able to caste your vote after %d year.\n",18 - num);
    }
    else
        printf("Congratulation! You are eligible for casting your vote.\n");
}