/*
A Pythagorean triplet is a set of three natural numbers, x < y < z, for which,
x2 + y2 = z2
For example, 32 + 42 = 9 + 16 = 25 = 52.
There exists exactly one Pythagorean triplet for which x +y + z = 1000.
Write a C programming to find the product xyz. Go to the editor
Expected Output:

Numbers are: 200, 375, 425 
Product of x, y, z is : 31875000
*/

#include <stdio.h>
int main()
{
    int n1, n2, n3;
    for (n1 = 1; n1 <= 333; n1++)
    {
        for (n2 = n1; n2 <= 666; n2++)
        {
            n3 = (1000 - n1 - n2);
            if (n1 * n1 + n2 * n2 == n3 * n3)
            {
                printf("\nNumber are: %d %d %d", n1, n2, n3);
                printf("\nProduct of n1, n2, n3 is: %d\n\n", n1 * n2 * n3);
            }
        }
    }
    return 0;
}