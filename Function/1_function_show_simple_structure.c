/*
Write a program in C to show the simple structure of a function.Go to the editor
Expected Output :

The total is :  11  
*/

#include <stdio.h>
//function declaration
int sum(int, int);
/* 
void ShowFun(int n)
{
    printf("The total is: %d", n);
}

int main()
{
    int a = 11;
    ShowFun(a);
}
*/
int main()
{
    int total;
    total = Sum(5, 6);
    printf("\n\nThe total is: %d\n\n", total);
    return 0;
}
//funcation defination
int Sum(int a, int b)
{
    int add;
    add = a + b;
    //function returning a value
    return add;
}