/* Write a program in C to display the first 10 natural numbers.
Expected Output :
1 2 3 4 5 6 7 8 9 10 */

#include<stdio.h>
int main()
{
    int n1;
    printf("Input a number: ");
    scanf("%d",&n1);

    for(int i = 1; i <= n1; i++)
    {
        printf("%d ", i);
    }
    return 0;
}