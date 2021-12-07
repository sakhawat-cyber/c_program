/*  Write a program in C to demonstrate the use of &(address of) and *(value at address) operator.
Expected Output :

Pointer : Demonstrate the use of & and * operator :                                                          
--------------------------------------------------------                                                      
 m = 300                                                                                                      
 fx = 300.600006                                                                                              
 cht = z                                                                                                      
                                                                                                              
 Using & operator :                                                                                           
-----------------------                                                                                       
 address of m = 0x7ffda2eeeec8                                                                                
 address of fx = 0x7ffda2eeeecc                                                                               
 address of cht = 0x7ffda2eeeec7                                                                              
                                                                                                              
 Using & and * operator :                                                                                     
-----------------------------                                                                                 
 value at address of m = 300                                                                                  
 value at address of fx = 300.600006                                                                          
 value at address of cht = z                      

Using only pointer variable :                                                                                
----------------------------------                                                                            
 address of m = 0x7ffda2eeeec8                                                                                
 address of fx = 0x7ffda2eeeecc                                                                               
 address of cht = 0x7ffda2eeeec7                                                                              
                                                                                                              
 Using only pointer operator :                                                                                
----------------------------------                                                                            
 value at address of m = 300                                                                                  
 value at address of fx= 300.600006                                                                           
 value at address of cht= z   */

#include <stdio.h>
int main()
{
    int m = 300;
    float fx = 30.600006;
    char cht = 'z';
    printf("Pointer: Demonstrate the use of & and *operation\n");
    printf("------------------------------------------------\n");

    int *pt1;
    int *pt2;
    int *pt3;

    pt1 = &m;
    pt2 = &fx;
    pt3 = &cht;

    printf("m = %d\n", m);
    printf("fx = %f\n", fx);
    printf("cht = %c\n\n", cht);

    printf("Using & operator: \n");
    printf("-------------------\n");
    printf("address of m = %p\n", &m);
    printf("address of fx = %p\n", &fx);
    printf("address of cht = %p\n\n", &cht);

    printf("Using & and * operator: \n");
    printf("------------------------\n");
    printf("Value at address of m = %d\n", *(&m));
    printf("Value at address of fx = %f\n", *(&fx));
    printf("Value at address of cht = %c\n\n", *(&cht));

    printf("Using only pointer variable : \n");
    printf("-------------------------------\n");
    printf("address of m = %p\n", pt1);
    printf("address of fx = %p\n", pt2);
    printf("address of cht = %p\n\n", pt3);

    printf("Using only pointer operator: \n");
    printf("-------------------------------\n");
    printf("Value at address of m = %d\n", *pt1);
    printf("Value at address of fx = %f\n", *pt2);
    printf("Value at address of cht = %c\n\n", *pt3);
}