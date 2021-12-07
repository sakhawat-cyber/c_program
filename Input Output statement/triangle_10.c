/*  Write a C program to find the third angle of a triangle if two angles are given.
Expected Output :
Input two angles of triangle separated by comma : 50,70
Third angle of the triangle : 60 */

#include<stdio.h>
int main()
{
    int a, c, b;
    char line_text[50];

    printf("Input two angles of tringle separted by comma : ");
    fgets(line_text, sizeof(line_text), stdin);
    sscanf(line_text, "%d , %d", &b, &c);

    //a + b +c = 180
    // 180 - (b + c) = a

    a = 180 - (b + c);
    printf("Third angle of the triangle : %d", a);
}
