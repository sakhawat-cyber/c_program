/* Write a C program to set a function that will be executed on termination of a program. Go to the editor

Expected Output :

This is the message from main function.                                
 Here is the message returning from newFunctionTwo.                     
 Here is the message returning from newFunctionOne. */

#include <stdio.h>
#include <stdlib.h>

void newFunctionOne(void)
{
    puts("Here is the message returning from newFunctionOne.");
}
void newFunctionTwo(void)
{
    puts("Here is the message returning from newFunctiontwo.");
}
int main()
{
    atexit(newFunctionOne);
    atexit(newFunctionTwo);
    puts("\nThis is the message from main function.");
    return 0;
}