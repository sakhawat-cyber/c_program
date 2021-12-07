/*
Write a program in C to swap two numbers using function.
Test Data :
Input 1st number : 2
Input 2nd number : 4
Expected Output :

Before swapping: n1 = 2, n2 = 4                                                  
After swapping: n1 = 4, n2 = 2 
*/

#include <stdio.h>
int Swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int n1, n2;
    printf("\nInput 1st number: ");
    scanf("%d", &n1);
    printf("Input 2nd number: ");
    scanf("%d", &n2);

    printf("\nBefore swapping: n1 = %d, n2 = %d\n", n1, n2);
    Swap(&n1, &n2);
    printf("After swapping: n1 = %d, n2 = %d\n", n1, n2);
}