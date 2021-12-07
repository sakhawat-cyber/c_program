/* Write a C program to convert a string to a double.

Expected Output :

Output= 4.00 */

#include <stdio.h>
int main()
{
    char input[] = "8.0 2.0";
    char *ptr_end;
    double x, y;

    x = strtod(input, &ptr_end);
    y = strtod(ptr_end, NULL);

    printf("\nOutput =  %.2lf\n\n", x / y);
    return 0;
}