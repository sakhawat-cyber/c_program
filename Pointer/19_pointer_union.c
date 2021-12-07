/* Write a program in C to show a pointer to union. 
Expected Output :

Jhon Mc Jhon Mc  */

#include <stdio.h>
union EmployeeAdd
{
    char *end_name;
    char string_name[20];
    int pin_cod;
};
int main()
{
    union EmployeeAdd employee, *ptr;
    //assing the string up to null character i.e. '\0'
    employee.end_name = "Jhon Mc\0Donald";
    ptr = &employee;

    printf("%s %s\n", ptr->end_name, (*ptr).end_name);

    return 0;
}