/* Write a C program to perform addition, subtraction, multiplication and  division of two numbers.
Expected Output :
Input any two numbers separated by comma : 10,5
The sum of the given numbers : 15
The difference of the given numbers : 5
The product of the given numbers : 50
The quotient of the given numbers : 2.000000 */

#include<stdio.h>

int main()
{
    int n1, n2;
    char line_text[50];
    printf("Input any two numbers separated by comma: ");
    fgets(line_text, sizeof(line_text), stdin);
    sscanf(line_text, "%d, %d", &n1, &n2);

    int sum = n1 + n2;
    int dif = n1 - n2;
    int pro = n1 * n2;
    float quo = n1 / n2;

    printf("The sum of the given number: %d\n", sum);
    printf("The difference of the given number: %d\n", dif);
    printf("The product of the given number : %d\n", pro);
    printf("The quotient of the given number : %f\n", quo);
}