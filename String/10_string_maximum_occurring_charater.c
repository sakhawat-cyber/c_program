/*
Write a program in C to find maximum occurring character in a string.

Test Data :
Input the string : Welcome to w3resource.com.

Expected Output :

The Highest frequency of character 'e' 
appears number of times : 4 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[50];
    int num = 50, i = 0, max, asci;
    int arr[num];

    printf("Input a string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; i < num; i++)
    {
        arr[i] = 0;
    }
    i = 0;

    while (str[i] != '\0')
    {
        asci = (int)str[i];
        arr[asci] += 1;
        i++;
    }
    max = 0;

    for (i = 0; i < num; i++)
    {
        if (i != 32)
        {
            if (arr[i] > arr[max])
                max = i;
        }
    }
    printf("The highest frequency of character '%c'", max);
    printf("appears number of time: %d", arr[max]);
}