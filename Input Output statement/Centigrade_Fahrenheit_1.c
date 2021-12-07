/* Write a program that converts Centigrade to Fahrenheit.

Expected Output :
Input a temperature (in Centigrade): 45
113.000000 degrees Fahrenheit.
 */

#include <stdio.h>

int main()
{
    float temp_f;
    float temp_c;
    char line_text[50];

    printf("Input a temperature (in  Centigrade): ");
    fgets(line_text, sizeof(line_text), stdin);
    sscanf(line_text, "%f", &temp_c);

    temp_f = ((9.0 / 5.0) * temp_c) + 32.0;
    printf("%f degrees Fharenheit.\n", temp_f);
    return 0;
}