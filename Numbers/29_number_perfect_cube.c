/*
Write a program in C to check whether a given number is a perfect cube or not.

Expected Output :
Input a number: 125
The number is a perfect Cube of 5
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    int n, cube_root;
    printf("Input a number: ");
    scanf("%d", &n);
    cube_root = round(pow(n, 1.0 / 3.0));
    if (cube_root * cube_root * cube_root == n)
        printf("The number is a perfect cube of : %d", cube_root);
    else
        printf("The number is not a perfect cube.\n");
}