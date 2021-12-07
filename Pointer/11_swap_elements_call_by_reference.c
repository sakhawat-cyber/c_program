/* Write a program in C to swap elements using call by reference. 
Test Data :
Input the value of 1st element : 5
Input the value of 2nd element : 6
Input the value of 3rd element : 7
Expected Output :

The value before swapping are :                                                                              
element 1 = 5                                                                                                
element 2 = 6                                                                                                
element 3 = 7                                                                                                
                                                                                                             
The value after swapping are :                                                                               
element 1 = 7                                                                                                
element 2 = 5                                                                                                
element 3 = 6  */

#include <stdio.h>
void SwapNumber(int *x, int *y, int *z);
int main()
{
    int st, nd, rd;
    printf("Input the value of 1st element: ");
    scanf("%d", &st);
    printf("Input the value of 2nd element: ");
    scanf("%d", &nd);
    printf("Input the value of 3rd element: ");
    scanf("%d", &rd);

    printf("\nThe value before swapping are: \n");
    printf("element 1 = %d\nelement 2 = %d\nelement 3 = %d", st, nd, rd);
    SwapNumber(&st, &nd, &rd);

    printf("\n\nThe value after swapping are: \n");
    printf("element 1 = %d\nelement 2 = %d\nelement 3 = %d", st, nd, rd);
}

void SwapNumber(int *x, int *y, int *z)
{
    int temp;
    temp = *y;
    *y = *x;
    *x = *z;
    *z = temp;
}