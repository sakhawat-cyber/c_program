/* Write a C program to check which number nearest to the value 100 among two given integers.
Return 0 if the two numbers are equal.
Expected Output:

95
0
99 */

#include<stdio.h>
#include <stdlib.h>
int main(void)
{
    printf("%d",test(78, 95));
    printf("\n%d",test(95, 95));
    printf("\n%d",test(99, 70));
}
int test(int x, int y)
{
    int num = 100;
    int value = abs(x - num);
    int value1 = abs(y - num);

    if (value == value1)
    {
        return 0;
    }
    else if (value < value1)
    {
        return x;
    }
    else 
        return y; 
}
