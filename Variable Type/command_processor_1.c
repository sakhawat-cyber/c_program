/* Write a C program which will invoke the command processor to execute a command. Go to the editor

Expected Output :

Is command processor available?                                         
Command processor available!                                            
Executing command DIR                                                   
00c40280-5e27-11e6-bd4f-71e8825f8ea3                                    
01691610-41e1-11e6-901d-35b72ececc72                                    
...........
ff827330-443a-11e6-9820-23e2f60d924e                                    
file.txt                                                                
logging_example.out                                                     
test.txt                                                                
Returned value is: 0. */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x;
    printf("\n\nIs command processor available?");
    if (system(NULL))
    {
        printf("Commond processor available!\n");
    }
    else
    {
        printf("Command processor not avavilable!\n");
        exit(1);
    }
    printf("Executing command DIR\n");
    x = system("dir");
    printf("Returned value is: %d\n", x);
}