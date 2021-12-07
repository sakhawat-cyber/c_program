/* 
Write a program in C to find the happy numbers between 1 to 1000.

Expected Output :
The happy numbers between 1 to 1000 are: 1 7 10 13 19 23 28 31 32 44 49.....
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int SumSqrNum(int give_no)
{
    int sum_sqr_num = 0;
    while (give_no)
    {
        sum_sqr_num += (give_no % 10) * (give_no % 10);
        give_no /= 10;
    }
    return sum_sqr_num;
}

bool CheckHappyNo(int check_happy_no)
{
    int n1, n2;
    n1 = n2 = check_happy_no;
    do
    {
        n1 = SumSqrNum(n1);
        n2 = SumSqrNum(SumSqrNum(n2));
    } while (n1 != n2);
    return (n1 == 1);
}

int main()
{
    int i;
    printf("The happy numbers between 1 to 1000 are: \n");
    for (i = 1; i <= 1000; i++)
    {
        if (CheckHappyNo(i))
            printf("%d ", i);
    }
}