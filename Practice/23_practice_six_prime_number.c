/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
The first six prime numbers are 2, 3, 5, 7, 11, and 13.
Write a C programming to ge21001st prime number?
Expected Output:

7927
*/


#include<stdio.h>
#include<stdlib.h>

int main()
{
    char *str;
    size_t i;
    unsigned num = 0;
    size_t n = 1000000;
    const unsigned target_value = 1001;

    str = calloc(n, sizeof *str);
    for(i = 2; i < n; i++)
    {
        if(!str[i])
        {
            size_t j;
            num++;
            if(num == target_value)
            {
                printf("\n%lu\n\n", i);
                break;
            }
            for(j = i * 2; j < n; j += i)
            {
                str[j] = 1;
            }
        }
    }
    free(str);
    return 0;
}
