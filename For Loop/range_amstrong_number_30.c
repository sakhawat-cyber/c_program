/*  Write a C program to find the 
Armstrong number for a given range of 
number. 
Test Data :
Input starting number of range: 1
Input ending number of range : 1000
Expected Output :
Armstrong numbers in given range are: 
1 153 370 371 407 */

#include<stdio.h>
int main()
{
    int n1, n2, i, temp, r, sum; 
    printf("Input starting number of range: ");
    scanf("%d", &n1);

    printf("Input ending number of range are: ");
    scanf("%d", &n2);

    printf("Armstrong number in given range are: ");
    for(i = n1; i <= n2; i++)
    {
        temp = i;
        sum = 0;
        while(temp != 0)
        {
            r = temp % 10;
            temp = temp / 10;
            sum = sum + (r * r * r);
        }
        if(sum == i)
            printf("%d ", i);
    }
    sum = 0;
}