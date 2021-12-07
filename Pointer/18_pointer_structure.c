/*  Write a program in C to show the usage of pointer to structure.
Expected Output :

 John Alter from Court Street */

#include <stdio.h>

struct EmployeeAddress
{
    char *end_name;
    char string_name[20];
    int pin_code;
} employee = {"John Alter", "Court Street", 11451}, *ptr = &employee;

int main()
{
    printf("Name: %s from %s\nPin Code: %d\n", ptr->end_name, (*ptr).string_name, (*ptr).pin_code);
    return 0;
}
