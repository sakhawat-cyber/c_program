/*
Write a program in C to remove a file from the disk. Go to the editor
Test Data :
Input the name of file to delete : test.txt
Expected Output :

 The file test.txt is deleted successfully..
 */

#include <stdio.h>
int main()
{
    int status;
    char name[20];
    printf("\nInput the name of file to delete: ");
    scanf("%s", name);
    status = remove(name);
    if (status == 0)
        printf("The file %s is deleted successfully..\n\n", name);
    else
        printf("Unable to delete file %s\n\n", name);
}