/*
Write a program in C to Print Fibonacci Series using recursion. 
Test Data :
Input number of terms for the Series (< 20) : 10
Expected Output :

 Input number of terms for the Series (< 20) : 10                                
 The Series are :                                                                
 1  1  2  3  5  8  13  21  34  55  
 */

#include<stdio.h>
int Fiboncci(int no, int num);
int n;
void main()
{
    static int first_no = 0, num = 1;
    printf("Input number of terms for the series(< 20): ");
    scanf("%d", &n);
    printf("Input number of terms for the series (< 20) \nThe series are: \n");
    printf(" 1 ");
    Fiboncci(first_no, num);

}
int Fiboncci(int first_no, int num)
{
    static int i = 1; 
    int next_no;

    if(i == n)
    return 0;
    else
    {
        next_no = first_no + num;
        first_no = num;
        num = next_no;
        printf("%d ", next_no);
        i++;
        Fiboncci(first_no, num);
    }
    return (0);
}