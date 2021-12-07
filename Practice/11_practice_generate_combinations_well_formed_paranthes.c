/*
Write a C program to generate all combinations of well-formed parentheses from n given pairs of parentheses.

   
Example: 
Input  n = 5
Output: 
(()())(())
(()())()()
(())((()))
.....
(())(())()
(())()(())
(())()()()
Expected Output:

((((()))))
(((()())))
(((())()))
(((()))())
(((())))()
((()(())))
((()()()))
((()())())
((()()))()
((())(()))
((())()())
((())())()
((()))(())
((()))()()
(()((())))
(()(()()))
(()(())())
(()(()))()
(()()(()))
(()()()())
(()()())()
(()())(())
(()())()()
(())((()))
(())(()())
(())(())()
(())()(())
(())()()()
()(((())))
()((()()))
()((())())
()((()))()
()(()(()))
()(()()())
()(()())()
()(())(())
()(())()()
()()((()))
()()(()())
()()(())()
()()()(())
()()()()()
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static char **genearateParanthesis(int n, int *return_size)
{
    int left_num, right_num, cap = 100, num = 0;
    char *stack = malloc(2 * n + 1);
    char **paranthess = malloc(cap * sizeof(char *));

    char *ptr = stack;
    left_num = right_num = 0;
    stack[2 * n] = '\0';
    while (ptr != stack || num == 0)
    {
        if (left_num == n && right_num == n)
        {
            paranthess[num] = malloc(2 * n + 1);
            strcpy(paranthess[num], stack);
            num++;
            while (--ptr != stack)
            {
                if (*ptr == '(')
                {
                    if (--left_num > right_num)
                    {
                        *ptr++;
                        right_num++;
                        break;
                    }
                }
                else
                    right_num--;
            }
        }
        else
        {
            //forward
            while (left_num < n)
            {
                *ptr++ = '(';
                left_num++;
            }
            while (right_num < n)
            {
                *ptr++ = ')';
                right_num++;
            }
        }
    }
    *return_size = num;
    return paranthess;
}

int main()
{
    int n, num;
    printf("\nInput number: ");
    scanf("%d", &n);
    char **list = genearateParanthesis(n, &num);
    for (n = 0; n < num; n++)
        printf("%s\n", list[n]);
    printf("\n\n");
    return 0;
}