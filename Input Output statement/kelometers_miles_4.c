/* Write a C program that converts kilometers per hour to miles per hour. Go to the editor
Expected Output :
Input kilometers per hour: 15
9.320568 miles per hour */

#include<stdio.h>

int main()
{
    float kilo, result;
    char line_text[50];
    printf("Input kilometers per hour: ");
    fgets(line_text, sizeof(line_text), stdin);
    sscanf(line_text, "%f", &kilo);
    
    /* mil = (kilo / 2.0); //+ (mil / 4);
    result =mil + (mil / 4.0);
    //temp = mil + n; */

     // 1km = 0.6213712 miles
    result = kilo * 0.6213712;

    printf("%f miles per hour", result);
    return 0;

}