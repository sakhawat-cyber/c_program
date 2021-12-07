/* Write a program in C which is a Menu-Driven Program to compute the area of the various geometrical shape.
Test Data :
1
5
Expected Output :
The area is : 78.500000 */

#include<stdio.h>
int main()
{
    int choich, r, l, w, b, h;
    float area;

    printf("Input 1 for area of circle\n");
    printf("Input 2 for area of rectangle\n");
    printf("Input 3 for area of tringle\n");
    printf("Input youn choice: ");
    scanf("%d", &choich);

    switch(choich)
    {
        case 1:
            printf("Input radious of the circle: ");
            scanf("%d",&r);
            area = 3.1416 * r * r;
            break;

        case 2: 
            printf("Input the length and width of the rectangle : ");
            scanf("%d %d", &l, &w);
            area = l * w;
            break;

        case 3:
            printf("Input the base and height of the tringle: ");
            scanf("%d %d", &b, &h);
            area = .5 * b * h;
            break;
    }

    printf("The area is : %f\n,",area);
}