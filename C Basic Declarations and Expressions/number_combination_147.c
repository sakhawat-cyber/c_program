/* Write a C program to find the number of combinations that satisfy p + q + r + s = n 
where n is a given number <= 4000 and p, q, r, s in the range of 0 to 1000.
Sample Output:

Input a positive integer:
25

Number of combinations of p,q,r,s:
3276 */

#include<stdio.h>
#include<stdlib.h>
#define check_num(x) (x > 0 ? x : 0)
int num, result, i;
int main()
{
    printf("Input sayed positive integer: \n");
    scanf("%d",&num);

    result = 0;
    for ( i = check_num(num - 2000); i <= 2000 && num >= i; i++)
    {
        result += (1001 - abs(1000 - (num - i))) * (1001 - abs(1000 - i));
    }
    
    printf("\nNumber of combination of p, q, r, s:\n");
    printf("%d\n",result);
}