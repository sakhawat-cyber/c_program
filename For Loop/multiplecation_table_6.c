/* Write a program in C to display the multiplication table of a given integer.
Test Data :
Input the number (Table to be calculated) : 15
Expected Output :
15 X 1 = 15
...
...
15 X 10 = 150 */

#include<stdio.h>
int main()
{
    
    int num, mul;
    printf("Input the number: ");
    scanf("%d", &num);

    for(int i = 1; i <= 10; i++)
    {
        mul = num * i;
        printf("%d X %d = %d\n",num, i, mul);
    }
}