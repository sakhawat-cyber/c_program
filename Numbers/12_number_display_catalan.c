/* 
Write a program in C to display the first 10 catalan numbers.

Expected Output :
The first 10 catalan numbers are:
1 1 2 5 14 42 132 429 1430 4862
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

unsigned long long int Catalan(unsigned int n)
{
    int i;

    if (n <= 1)
        return 1;
    unsigned long int catno = 0;
    for (i = 0; i < n; i++)
        catno += Catalan(i) * Catalan(n - i - 1);
    return catno;
}

int main()
{
    int i;
    printf("The first 10 catalan numbers are: ");
    for (i = 0; i < 10; i++)
        printf("%lu ", Catalan(i));
    printf("\n");
    return 0;
}