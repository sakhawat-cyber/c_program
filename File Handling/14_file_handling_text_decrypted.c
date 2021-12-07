/*
Write a program in C to decrypt a previously encrypted file file.

 Assume that, the content of the file test.txt was  :                                                                       
������Ʉ�ӄۗ�������ɒ��ђn 

After encryption, the content of the file is : 
Welcome to w3resource.com.
Test Data :
Input the name of file to decrypt : test.txt
Expected Output :

The file test.txt decrypted successfully..!!
Now, if you read the file test.txt you will see the following :

Welcome to w3resource.com.
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char name[20], chr;
FILE *ptr1, *ptr2;

    printf("\nInput the name of file to decrypt: ");
    scanf("%s", name);
    ptr1 = fopen(name, "w");
    if(ptr1 == NULL)
    {
        printf("File does not exists or error in opening..!!\n\n");
        exit(7);
    }
    ptr2 = fopen("temp.txt", "w");
    if(ptr2 == NULL)
    {
        printf("File does not exists or error in opening..!!\n\n");
        fclose(ptr1);
        exit(9);
    }
    while(1)
    {
        chr = fgetc(ptr2);
        if(chr == EOF)
        break;
        else
        {
        chr = chr - 100;
        fputc(chr, ptr1);
        }
    }
    printf("The file %s decrypted successfully..!!\n\n", name);
    fclose(ptr1);
    fclose(ptr2);
}