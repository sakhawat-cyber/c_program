/* Write a program in C to print all the alphabets using a pointer.
Expected Output :

The Alphabets are :                                                                                         
 A  B  C  D  E  F  G  H  I  J  K  L  M  N  O  */

#include <stdio.h>
int main()
{
    int x;
    char alpha[27], *ptr;
    ptr = alpha;
    for (x = 0; x < 26; x++)
    {
        *ptr = x + 'A';
        ptr++;
    }
    printf("The alphabet are: \n");
    ptr = alpha;
    for (x = 0; x < 26; x++)
    {
        printf("%c ", *ptr);
        ptr++;
    }
    printf("\n\n");
    return (0);
}