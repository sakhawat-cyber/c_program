/* Write a C program to accept a coordinate point in 
a XY coordinate system and determine in which quadrant
 the coordinate point lies.
Test Data : 7 9
Expected Output :
The coordinate point (7,9) lies in the First quadrant. */

#include<stdio.h>
int main()
{
    int n1, n2;
    printf("Input the values for X and Y coordinate : ");
    scanf("%d %d", &n1, &n2);

    if(n1 > 0 && n2 > 0)
        printf("The coordinate point (%d, %d) lines in the First quandrant.\n", n1, n2);

    else if(n1 < 0 && n2 > 0)
        printf("The coordinate point (%d, %d) lines in the Second quandrant.\n",n1, n2);

    else if(n1 < 0 && n2 < 0)
        printf("The coordinate point (%d, %d) lines in the Third quandrant.\n",n1, n2);
    
    else if(n1 > 0 && n2 < 0)
        printf("The coordinate point (%d, %d) lines in the Fourth quandrant.\n",n1, n2);
    
    else if(n1 == 0 && n2 == 0)
        printf("The coordinate point (%d, %d) lines at the Origin.\n", n1, n2);
}