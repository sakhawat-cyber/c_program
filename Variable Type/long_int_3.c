/*  Write a C program to convert a string to a long integer.

Expected Output :

In decimals: 2016, 4235440, -3624422, 5947391. */

#include <stdio.h>
int main()
{
    char buffer[] = "2016, 40a0b0 - 1101110100110111110011 0x5abff";
    char *ptr_end;
    long int i1, i2, i3, i4;

    i1 = strtol(buffer, &ptr_end, 10);
    i2 = strtol(ptr_end, &ptr_end, 16);
    i3 = strtol(ptr_end, &ptr_end, 2);
    i4 = strtol(ptr_end, NULL, 0);
    printf("\nIn decimals: %ld, %ld, %ld, %ld.\n\n", i1, i2, i3, i4);
    return 0;
}