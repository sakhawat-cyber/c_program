/* Write a program in C to calculate the sum of three numbers with getting input in one line separated by a comma.
Expected Output :
Input three numbers separated by comma : 5,10,15
The sum of three numbers : 30 */

#include<stdio.h>

int main()
{
    int n1, n2, n3, sum;
    char line_text[50];

    printf("Input sum of three numbers: ");
    fgets(line_text, sizeof(line_text), stdin);
    sscanf(line_text, "%d, %d, %d", &n1, &n2, &n3);

    sum = n1 + n2 + n3;

    printf("The sum of three number: %d", sum);
    return 0;
}