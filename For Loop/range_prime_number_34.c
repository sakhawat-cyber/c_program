/* Write a program in C to find the prime numbers within a 
range of numbers.
Test Data :
Input starting number of range: 1
Input ending number of range : 50
Expected Output :
The prime number between 1 and 50 are :
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 */

#include <stdio.h>
int main()
{
    int n1, n2, i;
    printf("Input starting number of range: ");
    scanf("%d", &n1);

    printf("Input ending number of range: ");
    scanf("%d", &n2);
     printf("Prime Number: ");
    for (i = n1; i <= n2; i++)
    {
        int j = 2, count = 0;
        while(j <= i / 2)
        {
            if (i % j == 0)
            {
                count++;
                break;
            }
            j++;
        }
        if (count == 0)
            printf("%d ", i);
    }
}