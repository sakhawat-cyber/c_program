/* Write a C program to find the largest of three numbers.
Test Data : 12 25 52
Expected Output :
1st Number = 12,        2nd Number = 25,        3rd Number = 52
The 3rd Number is the greatest among three */

#include<stdio.h>
int main()
{
    int n1, n2, n3;
    printf("Enter three number: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    printf("1st Number = %d,\t2nd Number = %d,\t3rdNumber = %d\n",n1, n2, n3);

    //if(n1 > n2)
    if((n1 > n2) & (n1 > n3))
        printf("The 1st number is the gretest among three\n");

    //else if(n2 > n3)
    if((n2 > n3) && (n2 > n3))
        printf("The 2nd Number is the greatest among three\n");

    //else
    if((n1 > n3) && (n3 > n2))
        printf("The 3rd Number is the gretest among three\n");
}