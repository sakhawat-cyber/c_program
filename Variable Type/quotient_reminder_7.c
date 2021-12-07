/*  Write a C program to integral quotient and remainder of a division.

Test Data and Expected Output :

Input numerator : 2500                                                 
 Input denominator : 235                                                
 quotient =  10, remainder = 150 */

 #include<stdio.h>
 #include<stdlib.h>
 int main()
 {
    int num, num1, quotient, reminder;
    printf("Input numerator: ");
    scanf("%d", &num);
    printf("input denominator: ");
    scanf("%d", &num1);
    quotient = num / num1;
    reminder = num % num1;
    printf("quotient = %d, remainder = %d", quotient, reminder);
 }