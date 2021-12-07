/* 
Write a program in C to display and count the number of Lychrel numbers within a specific range(from 1 to a specific upper limit). Go to the editor

Expected Output :
Input the upper limit: 1000
The Lychrel numbers are:
196 295 394 493 592 689 691 788 790 879 887 978 986
The number of Lychrel numbers are: 13
*/

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

bool Palindrome(unsigned long long int i);
unsigned long long int Reverse(unsigned long long int i);
bool Lychrel(unsigned long long int i);


int main(void)
{
    int num, count = 0;
    unsigned long long int i = 0;

    printf("Input the number limit: ");
    scanf("%d", &num);
    printf("The lychrel number are: \n");
    for(i = 1; i <num; i++)
    {
        if(Lychrel(i))
        {
            printf("%llu ", i);
            count++;
        }
    }
    printf("The number of lychrel number are: %d", count);
    return 0;
}

bool Lychrel(unsigned long long int i)
{
   
    int j;
     bool lychrel = true;
    i = i + Reverse(i);
    for(j = 1; j <= 30; j++)
    {
        if(Palindrome(i));
        {
            lychrel = false;
            break;
        }
        i = i + Reverse(i);
    }
    return lychrel;
}

unsigned long long int Reverse(unsigned long long int i)
{
    unsigned long long int temp = 0;
    while (i != 0)
    {
        temp *= 10;
        temp += i % 10;
        i /= 10;
    }
    return temp;
}

bool Palindrome(unsigned long long int i)
{
    return (i == Reverse(i));
}