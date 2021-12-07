/*
Write a program in C to find the LCM of two numbers using recursion. 
Test Data :
Input 1st number for LCM : 4
Input 2nd number for LCM : 6
Expected Output :

The LCM of 4 and 6 :  12   
*/

#include <stdio.h>
int LcmCulculate(int a, int b);
int main()
{
    int n1, n2, lcm;
    printf("\nInput 1st number for LCM: ");
    scanf("%d", &n1);
    printf("Input 2nd number for LCM: ");
    scanf("%d", &n2);
    //ensure that lcm parameter of lcm must be smaller the 2nd
    if (n1 > n2)
        //call the function lcmculculate for lcm culculation
        lcm = LcmCulculate(n2, n1);
    else
        //call the function lcmcalculate for Lcm culculation
        lcm = LcmCulculate(n1, n2);
    printf("The LCM of %d and %d: %d\n\n", n1, n2, lcm);
}

/*the value of n1 and n2 is passing the through a and b*/
int LcmCulculate(int a, int b)
{
    static int n = 0;
    //increment m by adding max value to it
    n += b;
    //if found a common multiple then return the n;
    if ((n % a == 0) && (n % b == 0))
        return n;
    else
        //calling the function lcm culculate it self
        LcmCulculate(a, b);
}