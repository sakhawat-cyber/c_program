/* Write a program in C to print a string in reverse using a pointer.
Test Data :
Input a string : w3resource
Expected Output :

 Pointer : Print a string in reverse order :                                                                  
------------------------------------------------                                                              
 Input a string : w3resource                                                                                  
 Reverse of the string is : ecruoser3w */

#include <stdio.h>
int main()
{
    char arr[50];
    char reverse_arr[50];
    char *string_arr = arr;
    char *reverse = reverse_arr;
    printf("Pointer: print a string is reverse order: \n");
    printf("-------------------------------------------\n");

    printf("Input a string: ");
    fgets(arr, sizeof(arr), stdin);

    int i = -1;
    while (*string_arr)
    {
        string_arr++;
        i++;
    }

    while (i >= 0)
    {
        string_arr--;
        *reverse = *string_arr;
        reverse++;
        --i;
    }
    *reverse = '\0';
    printf("Reverse of the string is: %s\n\n", reverse_arr);
    return 0;
}