/* Write a program in C to print all permutations of a given string using pointers.
Expected Output :

The permutations of the string are :                                                                         
abcd  abdc  acbd  acdb  adcb  adbc  bacd  badc  bcad  bcda  bdca  bdac  cbad  cbda  cabd  cadb  cdab  cdba  db
ca  dbac  dcba  dcab  dacb  dabc */

#include <stdio.h>
#include<string.h>

void ChangePosition(char *ch1, char *ch2)
{
    char temp;
    temp = *ch1;
    *ch1 = *ch2;
    *ch2 = temp;
}

void CharPermutation(char *cht, int sart_num, int end_num)
{
    int i;
    if (sart_num == end_num)
        printf("%s ", cht);
    else
    {
        for (i = sart_num; i <= end_num; i++)
        {
            ChangePosition((cht + sart_num), (cht + i));
            CharPermutation(cht, sart_num + 1, end_num);
            ChangePosition((cht + sart_num), (cht + i));
        }
    }
}

int main()
{
    char str[] = "abcd";
    int length = strlen(str);
    printf("The permutation of the string are: \n");
    CharPermutation(str, 0, length - 1);
    printf("\n\n");
    return 0;
}