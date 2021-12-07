/*
Write a program in C to check armstrong and perfect numbers using the function. Go to the editor
Test Data :
Input any number: 371
Expected Output :

 The 371 is an Armstrong number.                                                 
 The 371 is not a Perfect number.
 */

#include <stdio.h>
int CheckArmstrong(int n);
int CheckPerfect(int n);

int main()
{
    int num;
    printf("\nInput any number: ");
    scanf("%d", &num);
    int n = CheckArmstrong(num);

    //call the is armstrong() fumction
    if (CheckArmstrong(num))
        printf("The %d an Armstrong number.\n\n", num);
    else
        printf("The %d is not a Armstrong number.\n\n", num);
    //call the is perfect() function

    if (CheckPerfect(num))
        printf("The %d an perfect number.\n\n", num);
    else
        printf("The %d is not a perfect number.\n\n", num);
}
//checks wether a three digit number is armstorg number or not.
/*a perfect number is a positive integer that is equal to
to the sum of the n - th powers of its digits. */
int CheckArmstrong(int n)
{
    int i, sum, num;
    sum = 0;
    num = n;

    while (num != 0)
    {
        //find the last digit of the number
        i = num % 10;
        //culculate the cube of the last digit and add to sum
        sum += i * i * i;
        num = num / 10;
    }
    return (n == sum);
}

//checks wether the number is perfect number or not.
/*a perfect number is a positive integer that is equal to
to the sum of the n - th powers of its digits. */
int CheckPerfect(int n)
{
    int i, num, sum;
    for (i = 1; i < num; i++)
    {
        //if i is a divisor if n1
        if (num % i == 0)
            sum += i;
    }
    return (n == sum);
}