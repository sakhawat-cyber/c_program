/*  Write a program in C to read 10 numbers from keyboard and find their sum and average.
Test Data :
Input the 10 numbers :
Number-1 :2
...
Number-10 :2
Expected Output :
The sum of 10 no is : 55
The Average is : 5.500000 */

#include<stdio.h>
int main()
{
    int num, sum = 0;
    printf("Input the numbers: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++)
    {
        printf("Number - %d: \n",i);
        sum = sum + i;
    }
    float avg = (float)sum / 10;
    printf("The sum of 10 no is: %d\n", sum);
    printf("The average is: %f",avg);
}