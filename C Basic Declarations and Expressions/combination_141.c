/* Write a C program that reads n digits (given) chosen from 0 to 9 and prints the number of combinations where the sum of the digits equals to another given number (s). Do not use the same digits in a combination.

For example, the combinations where n = 3 and s = 6 are as follows:
1 + 2 + 3 = 6
0 + 1 + 5 = 6
0 + 2 + 4 = 6

Sample Output:

Input the number:
3

Sum of the digits:
6
Number of combinations: 3 */

#include <stdio.h>
int combination(int number, int sumation, int a)
{
	int i,result = 0;
	if (number == 1)
	{
		if (sumation >= a && sumation <= 9)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

	for (i = a; i <= 9; i++)
	{	        
		result += combination(number - 1, sumation - i, i + 1);	 
	}

	return result;
}

int main()
{
	int  num,sum;
        printf("Input the number:\n");
		scanf("%d", &num);
		printf("\nSum of the digits:\n");
		scanf("%d", &sum);
		if (num != 0 && sum != 0)
		{
			printf("Number of combinations: %d\n",combination(num,sum,0));
		}
		
	return 0;
}
