/* 
Write a program in C to find any number between 1 and n that can be expressed as the sum of two cubes in two (or more) different ways. Go to the editor

Expected Output :
The numbers in the above range are:
1729 = 1^3 + 12^3 = 9^3 + 10^3
4104 = 2^3 + 16^3 = 9^3 + 15^3
13832 = 2^3 + 24^3 = 18^3 + 20^3
39312 = 2^3 + 34^3 = 15^3 + 33^3
46683 = 3^3 + 36^3 = 27^3 + 30^3
32832 = 4^3 + 32^3 = 18^3 + 30^3
40033 = 9^3 + 34^3 = 16^3 + 33^3
20683 = 10^3 + 27^3 = 19^3 + 24^3
65728 = 12^3 + 40^3 = 31^3 + 33^3
64232 = 17^3 + 39^3 = 26^3 + 36^3
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i, j, k, l, n1, n2 = 100000, n3, n4, n5;
    printf("The number in the above range are: \n");
    for (i = 1; i <= n2; i++)
    {
        n1 = i * i * i;
        if (n1 > n2)
            break;
        for (j = i; j <= n2; j++)
        {
            n3 = j * j * j;
            if (n1 + n3 > n2)
                break;
            for (k = i + 1; k <= n2; k++)
            {
                n4 = k * k * k;
                if (n4 > n1 + n3)
                    break;
                for (l = k; l <= n2; l++)
                {
                    n5 = l * l * l;
                    if (n4 + n5 > n1 + n3)
                        break;
                    if (n4 + n5 == n1 + n3)
                    {
                        printf("%d = ", (n1 + n3));
                        printf("%d ^ 3 + %d ^ 3 = ", i, j);
                        printf("%d ^ 3 + %d ^ 3", k, l);
                        printf("\n");
                    }
                }
            }
        }
    }
}