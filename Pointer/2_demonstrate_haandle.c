/*  Write a program in C to demonstrate how to handle the pointers in the program.
Expected Output :

Address of m : 0x7ffcc3ad291c
 Value of m : 29                                                                                              
                                                                                                              
 Now ab is assigned with the address of m.                                                                    
 Address of pointer ab : 0x7ffcc3ad291c                                                                       
 Content of pointer ab : 29                                                                                   
                                                                                                              
 The value of m assigned to 34 now.                                                                           
 Address of pointer ab : 0x7ffcc3ad291c                                                                       
 Content of pointer ab : 34                                                                                   
                                                                                                              
 The pointer variable ab is assigned with the value 7 now.                                                    
 Address of m : 0x7ffcc3ad291c                                                                                
 Value of m : 7  */

#include <stdio.h>
int main()
{
    int *ab;
    int m;
    m = 29;

    printf("Address of m : %p\n", &m);
    printf("Value of m : %d\n\n", m);
    ab = &m;

    printf("Now ab is assigned with the address of m.\n");
    printf("Address of pointer ab : %p\n", ab);
    printf("Content of pointer ab : %d\n\n\n", *ab);
    m = 34;

    printf("The value of m assigned to %d now.\n", m);
    printf("Address of pointer ab : %p\n", ab);
    printf("Content of pointer ab : %d\n\n\n", *ab);
    *ab = 7;

    printf("The pointer variable ab is assigned with address of m : %p\n", &m);
    printf("Value of m : %d\n", m);
}