/* Write a C program to demonstrate the working of keyword long.

Expected Output :

 The size of int = 4 bytes                                                           
 The size of long = 8 bytes                                                          
 The size of long long = 8 bytes                                                     
 The size of double = 8 bytes                                                        
 The size of long double = 16 byte */

 #include<stdio.h>
 #include<stdlib.h>

 int main()
 {
     int a;
     long b;
     long long c;
     double e;
     long double f;

     printf("The size of int = %ld bytes\n", sizeof(a));
     printf("The size of long = %ld bytes\n", sizeof(b));
     printf("The size of long long = %ld bytes\n", sizeof(c));
     printf("The size of double = %ld bytes\n", sizeof(e));
     printf("The size of long double = %ld bytes\n", sizeof(f));
     
     return 0;
 }