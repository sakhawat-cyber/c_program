/* Write a C program to check if two given non-negative integers have the same last digit. Go to the editor
Expected Output:

0
1
1
0 */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("%d", test(123, 456));
    printf("\n%d", test(12, 512));
    printf("\n%d", test(7, 87));
    printf("\n%d", test(12, 45));
}
int test(int x, int y)
{
    int result = (abs(x % 10) == abs(y % 10));
    if(result)
    {
        return result; 
    }
}