/* Write a C program that calculates the volume of a sphere. Go to the editor
Expected Output :
Input the radius of the sphere : 2.56
The volume of sphere is 70.276237. */

#include<stdio.h>
//#define pi 3.1416

int main()
{
    float r, radius;
    char line_text[50];
    const float pi = 3.1416;
    printf("Input the radius of the sphere: ");
    fgets(line_text, sizeof(line_text), stdin);
    sscanf(line_text, "%f", &r);

    radius = (float)(4/3) * pi * (r * r * r) ;
    
    printf("The volume of sphere is: %f",radius);
}