/*
Write a program in C to encrypt a text file.

 Assume that, the content of the file test.txt is  :                                                                       
Welcome to w3resource.com. 
Test Data :
Input the name of file to encrypt : test.txt
Expected Output :

File test.txt successfully encrypted ..!!
If you read the file test.txt you will see the following :

������Ʉ�ӄۗ�������ɒ��ђn
*/

#include <stdio.h>
#include<stdlib.h>

int main()
{
    char name[20], chr;
    FILE *ptr1, *ptr2;

    printf("\nInput the name of file to encrypt: ");
    scanf("%s", name);
    ptr1 = fopen(name, "r");
    if (ptr1 == NULL)
    {
        printf("File does not exists of error in opening..!!");
        exit(1);
    }
    ptr2 = fopen("temp.txt", "w");
    if (ptr1 == NULL)
    {
        printf("Error in creation of file temp.txt...!!");
        fclose(ptr1);
        exit(2);
    }

    while (1)
    {
        chr = fgetc(ptr1);
        if (chr == EOF)
            break;
        else
        {
            chr = chr + 100;
            fputc(chr, ptr2);
        }
    }
    fclose(ptr1);
    fclose(ptr2);
    ptr1 = fopen(name, "w");
    if (ptr1 == NULL)
    {
        printf("File does not exists or error in opening..!!\n");
        exit(3);
    }
    ptr2 = fopen("temp.txt", "r");
    if (ptr2 == NULL)
    {
        printf("File does not exists or error in opening..!!\n\n");
        fclose(ptr1);
        exit(4);
    }
    while (1)
    {
        chr = fgetc(ptr1);
        if (chr == EOF)
            break;
        else
            fputc(chr, ptr1);
    }
    printf("File %s successfully encrypted...!!\n\n", name);
    fclose(ptr1);
    fclose(ptr2);
}