/* Write a C program, which reads a list of pairs of a word and a page 
number, and prints the word and a list of the corresponding page numbers.

The number of pairs of a word and a page number is less than or equal to
1000. A word never appears in a page more than once. The words should be
printed in alphabetical order and the page numbers should be printed in
ascending order.

Input:
word page_number
Output:
word
a_list_of_the_page_number
word
a_list_of_the_Page_number 

Sample Output:

Input pairs of a word and a page_no 
number:
Twinkle
65
Twinkle
55
Little
25
Star
35
^Z

Word and page_no number in alphabetical 
order:
Little
25
Star
35
Twinkle
55 65 */

#include <stdio.h>
#include <string.h>
typedef struct
{
    int page_number;
    char word[50];
} start;
int main()
{
    start arr[10000];
    int i = 0, j, k;
    start temp;
    int count = 0;

    printf("Input pairs of a word and a page: \n");
    while (scanf("%s %d", arr[i].word, &arr[i].page_number) != EOF)
    {
        i++;
    }

    for (j = 0; j < i; j++)
    {
        for (k = i - 1; 0 < k; k--)
        {
            if (strcmp(arr[k].word, arr[k - 1].word) < 0)
            {
                temp = arr[k];
                arr[k] = arr[k - 1];
                arr[k - 1] = temp;
            }

            else if (strcmp(arr[k].word, arr[k - 1].word) == 0)
            {
                if (arr[k].page_number < arr[k - 1].page_number)
                {
                    temp = arr[k];
                    arr[k] = arr[k - 1];
                    arr[k - 1] = temp;
                }
            }
        }
    }
    printf("\nWord and page_number in alphabetical order:\n");
    for (j = 0; j < i; j++)
    {
        if (j != 0)
        {
            if (strcmp(arr[j].word, arr[j - 1].word) == 0)
            {
                printf("%d", arr[j].page_number);
            }
            else
            {
                printf("\n%s\n%d", arr[j].word, arr[j].page_number);
            }
        }
        else
        {
            printf("%s\n%d", arr[j].word, arr[j].page_number);
        }
    }

    printf("\n");
    return 0;
}