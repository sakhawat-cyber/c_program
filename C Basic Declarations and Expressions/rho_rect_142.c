/* Write a C program which reads the two adjoined sides and the diagonal of a parallelogram and
 check whether the parallelogram is a rectangle or a rhombus.
Input:
Two adjoined sides and the diagonal.
1 <= ai, bi, ci <= 1000, ai + bi > ci
Sample Output:

Input two adjoined sides of the parallelogram:
3
4

Input the diagonal of the parallelogram:
5

This is a rectangle.
Sample Output:

Input two adjoined sides of the parallelogram:
5
5

Input the diagonal of the parallelogram:
7

This is a rhombus. */

#include <stdio.h>
int main()
{
    int number, num1, num2, rectangle = 0, rhombus = 0;
    printf("Input two adjoined of the parallelogrm:\n");
    scanf("%d%d", &num1, &num2);

    printf("Input the digonal of the parallelogram:\n");
    scanf("%d", &number);

    if (number * number == num1 * num1 + num2 * num2)
    {
        rectangle++;
    }
    if (num1 == num2)
    {
        rhombus++;
    }

    if (rectangle > 0)
        printf("\nThis is rectangle.");
    if (rhombus > 0)
        printf("\nThis is rhombus.");
    return 0;
}
