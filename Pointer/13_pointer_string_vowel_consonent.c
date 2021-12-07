/* Write a program in C to count the number of vowels and consonants in a string using a pointer.
Test Data :
Input a string: string
Expected Output :

Number of vowels : 1                                                                                         
Number of constant : 5 */

#include <stdio.h>
int main()
{
    char str[25];
    char *ptr;
    int vow, con;
    printf("Input a string: ");
    fgets(str, sizeof str, stdin);

    //assign address of str to ptr
    ptr = str;
    vow = con = 0;
    while (*ptr != '\0')
    {
        if (*ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U' || *ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u')
            vow++;
        else
            con++;
        /*pointer is increasing for 
            searching the next character */
        ptr++;
    }
    printf("\nNumber of vowels: %d\nNumber of consonent: %d\n", vow, con - 1);
    return 0;
}