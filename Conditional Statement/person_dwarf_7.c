/* Write a C program to accept the height of a person in 
centimeter and categorize the person according to their 
height.
Test Data : 135
Expected Output :
The person is Dwarf. */

#include<stdio.h>
int main()
{
    float height;
    printf("Input the number of height: ");
    scanf("%f", &height);
    if(height < 150.0)
        printf("The person is Dwarf.\n");
    
    else if ((height >= 150.0) && (height < 165.0))
        printf("The person is average heighted.\n");

    else if((height >= 165.0) && (height < 195.0))
        printf("The person is taller.\n");

    else    
        printf("Abnormal height.\n");

    
    
}