/* Write a C program to abort the current process.

Expected Output :

 File does not exist or error, in opening the file.                                                           
timeout: the monitored command dumped core                                                                    
Aborted  */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *FilePtr;
    FilePtr = fopen("myfile.txt", "r");
    if (FilePtr == NULL)
    {
        fputs("\nfile dose not exist or error, in opening the file\n",stderr);
        abort();
    }
    fclose(FilePtr);
    return 0; 
}
