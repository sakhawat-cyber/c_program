/* 
Write a C programming to check if a given integer is a power of three.
Example:
Input: 9
Output: true
Input: 81
Output: true
Input: 45
Output: false
*/

#include <stdio.h>
#include <stdbool.h>

static bool IsPowerThree(int n)
{
#if 0
    if(n == 1) 
    return true;
    if(n == 0 || n % 3)
    return false;
    return IspowerThree(n / 3);
#else
    return (n > 0 && (1162261467 % n) == 0);
#endif
}

int main()
{
    int x = 9;
    printf("If %d is power of three? %d\n", x, IsPowerThree(x));

    x = 81;
    printf("If %d is power of three? %d\n", x, IsPowerThree(x));

    x = 45;
    printf("If %d is power of three? %d\n", x, IsPowerThree(x));
    return 0;
}