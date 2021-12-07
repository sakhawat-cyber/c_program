/* Write a C program that prints the perimeter of a rectangle to take its height and width as input.
Expected Output :
Input the height of the Rectangle : 5
Input the width of the Rectangle : 7
Perimeter of the Rectangle is : 24.000000 */

#include<stdio.h>

int main()
{
    float height, weight, rect;
    char line_text[50];
    
    printf("Input the height of the Rectangle: ");
    fgets(line_text, sizeof(line_text), stdin);
    sscanf(line_text, "%f", &height);

    printf("Input the weight of the Rectangle: ");
    fgets(line_text, sizeof(line_text), stdin);
    sscanf(line_text, "%f", &weight);

    rect = (float)(2) * (height + weight);

    printf("Premeter of the Rectangle is: %f", rect);
    return 0;
}