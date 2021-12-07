/* 
 Write a program in c++ to find the the Authomorphic numbers between 1 to 1000. Go to the editor

Expected Output :
The Authomorphic numbers are: 1 5 6 25 76 376 625
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool CheckAuthomorpic(int num)
{
    int n1 = num * num;
    while (num > 0)
    {
        if (num % 10 != n1 % 10)
            return false;
        num /= 10;
        n1 /= 10;
    }
    return true;
}

int main()
{
    printf("The authomorpic number are: \n");
    int i;
    for (i = 1; i < 1000; i++)
    {
        if (CheckAuthomorpic(i))
            printf("%d ", i);
    }
}