/* 
Write a program in C to check a number is a Happy or not. Go to the editor

Expected Output :
Input a number: 13
13 is a Happy number.
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int SumSquNum(int give_no)
{
    int sum_sqr_num = 0;
    while (give_no)
    {
        sum_sqr_num += (give_no % 10) * (give_no % 10);
        give_no /= 10;
    }
    return sum_sqr_num;
}

bool CheckHappy(int check_happy_no)
{
    int n1, n2;
    n1 = n2 = check_happy_no;
    do
    {
        n1 = SumSquNum(n1);
        n2 = SumSquNum(SumSquNum(n2));
    } while (n1 != n2);
    return (n1 == 1);
}

int main()
{
    int n;

    printf("Input a number: ");
    scanf("%d", &n);
    if (CheckHappy(n))
        printf("%d is happy number.\n", n);
    else
        printf("%d is not a happy number.\n", n);
}