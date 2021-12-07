/* Write a C program to convert a string to an unsigned long integer.

Test Data and Expected Output :

Input an unsigned number: 25                                            
Output: 25 */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    char buffer[123];
    unsigned long num;
    printf("\nInput an unsigned number:");
    fgets(buffer, 123, stdin);

    num = strtoul(buffer, NULL, 0);
    printf("Output: %lu\n\n", num);
    return 0;
} 