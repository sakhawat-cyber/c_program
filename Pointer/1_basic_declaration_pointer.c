/* Write a program in C to show the basic declaration of pointer.
Expected Output :

 Pointer : Show the basic declaration of pointer :                                                            
-------------------------------------------------------                                                       
 Here is m=10, n and o are two integer variable and *z is an integer                                          
                                                                                                              
 z stores the address of m  = 0x7ffd40630d44                                                                  
                                                                                                              
 *z stores the value of m = 10                                                                                
                                                                                                              
 &m is the address of m = 0x7ffd40630d44                                                                      
                                                                                                              
 &n stores the address of n = 0x7ffd40630d48                                                                  
                                                                                                              
 &o  stores the address of o = 0x7ffd40630d4c                                                                 
                                                                                                              
 &z stores the address of z = 0x7ffd40630d50   */

#include<stdio.h>
void main(void)
{
    int m = 10, n, o;
    int *z = &m; 
    
    printf("Pointer: Show the basic declariation of point.");
    printf("\n----------------------------------------------.");
    printf("\nHere is m = 10, n and o are two integer variable.\n");
    
    //z is a pointer so %p would print the address 
    printf("\nz stores the address of m = %p", z);
    printf("\n*z stores the value of m = %i", *z);
    
    //&m gives the address of the the integer variable m 
    printf("\n&m is the address of m = %p", &m);
    
    //so %p is the specifier for the address
    printf("\n&n stores the address of n = %p", &n);
    printf("\n&o stores the address of o = %p ", &o);

    //&z gives the address where the pointer z is
    printf("\n&z stores the adderss of z = %p", &z);
    /* sorted -> still an address -> %p is the right specifier */

}