/* Write a program in C to show a pointer to an array which contents are pointer to structure.
Expected Output :

 Exmployee Name : Alex                                                                                        
 Employee ID :  1002    */

#include <stdio.h>
struct Employee
{
    char *employee_name;
    int emp_id;
};

int main()
{
    static struct Employee emp1 = {"Jhon", 1001}, emp2 = {"Alex", 1002}, emp3 = {"Sayed", 1003};
    struct Employee(*arr[]) = {&emp1, &emp2, &emp3};
    struct Employee(*(*ptr)[3]) = &arr;

    printf("Employee Name: %s\n", (**(*ptr + 1)).employee_name);

    printf("\n--------Explanation------\n");
    printf("(**(*ptr + 1).employee_name\n");
    printf("= (**(*&arr + 1)).employee_name    as   ptr = &arr\n");
    printf("= (**(arr + 1)).employee_name   from rule *&ptr = ptr\n");
    printf("= (*arr[1]).employee_name   from rule *(ptr + i = ptr[i]\n");
    printf("= (*&emp2).employee_name   as arr[1] = &emp2\n");
    printf("= emp2.employee_name   from rule *&ptr = ptr\n\n");

    printf("Employee id: %d\n", (*(*ptr + 1))->emp_id);
    printf("\n--------Explanation------\n");
    printf("(*(*ptr + 1)) -> emp_id\n");
    printf("= (**(*ptr + 1)).emp_id   from rule -> = (*).\n");
    printf("= emp2.emp_id = 1002\n\n");
    return 0;
}