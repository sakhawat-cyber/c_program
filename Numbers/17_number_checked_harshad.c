/* 
Write a program in C to check if a number is Harshad Number or not.

Expected Output :
Input a number: 9
The given number is a Harshad Number.
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>

bool CheckHarshad(int n)
{
    int sum = 0, temp;
    for(temp = n; temp > 0; temp /= 10)
    sum += temp % 10;
    return (n % sum == 0);
}

int main()
{
    int n;
    printf("Input a number: ");
    scanf("%d", &n);
    if(CheckHarshad(n))
    printf("The given number is a harshed number.");
    else
      printf("The given number is not a harshed number.");
}