/* Write a C program to create maximum number of regions obtained by drawing n
given straight lines.

If you draw a straight line on a plane, the plane is divided into two regions.
For example, if you pull two straight lines in parallel, you get three areas,
and if you draw vertically one to the other, you get four areas.

Input:
(1 ≤ n ≤ 10,000)

Sample Output:

Input number of straight lines:
2
Maximum number of regions obtained by drawing 2 given straight lines:
4 */

#include<stdio.h>
int main()
{
    int num, num1;
    printf("Input number of straight lines:\n");
    scanf("%d",&num);

    printf("Maximum number of regions obtained by drawing 2 given straight lines:\n");
    printf("%d",(num * num + num + 2) /2);
    
}