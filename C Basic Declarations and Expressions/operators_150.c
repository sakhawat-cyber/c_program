/* Write a C program that reads an expression and evaluates it. 
Input:
4
10-2*3=
8*(8+2-5)=

Sample Output:

Input an expression using +, -, *, / operators:
1+6*8-4/2
47
Sample Output:

Input an expression using +, -, *, / operators:
25/5-6*7+2
-35
Sample Output:

Input an expression using +, -, *, / operators:
9+6+(5*2)-5
20 */

#include <stdio.h>
#include <string.h>

int add_sub();
int mul_div();
int term();

char arr[101];
int pos = 0;

int trem()
{
    int num;
    if (arr[pos] == '(')
    {
        pos++;
        num = add_sub();
        if (arr[pos] == ')')
        {
            pos++;
            return num;
        }
    }
    else
    {
        while ('0' <= arr[pos] && arr[pos] <= '9')
        {
            num = num * 10 + (arr[pos] - '0');
            pos++;
        }
    }
    return num;
}

int mul_div()
{
    int first, second;
    first = trem();
    for (;;)
    {
        if (arr[pos] == '*')
        {
            pos++;
            second = trem();
            first *= second;
        }
        else if (arr[pos] == '/')
        {
            pos++;
            second = trem();
            first /= second;
        }
        else
        {
            return first;
        }
    }
}

int add_sub()
{
    int first, second;
    first = mul_div();
    for (;;)
    {
        if (arr[pos] == '+')
        {
            pos++;
            second = mul_div();
            first += second;
        }
        else if (arr[pos] == '-')
        {
            pos++;
            second = mul_div();
            first -= second;
        }
        else
            return first;
    }
}

int main()
{
    int num;
    printf("Input an expression using +, -, *, / operators:\n");
    
    scanf("%s",arr);
    printf("%d\n",add_sub());
    return 0;
}