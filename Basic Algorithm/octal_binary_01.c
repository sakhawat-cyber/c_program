#include <stdio.h>
#define max 10000
int main()
{
    char octalnum[max];
    long i = 0;

    printf("Enter any octal number: ");
    gets(octalnum);
    printf("Equivalent binary value: ");
    while (octalnum[i])
    {
        switch (octalnum[i])
        {
        case '0':
            printf("000");
            break;
        case '1':
            printf("001");
            break;
        case '2':
            printf("010");
            break;
        case '3':
            printf("011");
            break;
        case '4':
            printf("100");
            break;
        case '5':
            printf("101");
            break;
        case '6':
            printf("110");
            break;
        case '7':
            printf("111");
            break;
        default:
            printf("\nInvalid octal digit %c", octalnum[i]);
            return 0;
        }
        i++;
    }
    return 0;
}