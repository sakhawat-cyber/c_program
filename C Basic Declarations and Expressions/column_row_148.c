/* Write a C program, which adds up columns and rows of 
given table as shown in the following figure.
Input:
n (the size of row and column of the given table)
1st row of the table
2nd row of the table
:
:
n th row of the table
The input ends with a line consisting of a single 0.
Sample Output:

Input number of rows/columns:
4
Input the cell value

Row 0 input cell values
25
69
51
26

Row 1 input cell values
68
35
29
54

Row 2 input cell values
54
57
45
63

Row 3 input cell values
61
68
47
59

Result:
   25   69   51   26  171
   68   35   29   54  186
   54   57   45   63  219
   61   68   47   59  235
  208  229  172  202  811 */

#include <stdio.h>
int main()
{
   int num, arr[10][10], sum;
   int i, j;
   printf("Input number of rows/columns: ");
   scanf("%d", &num);

   printf("Input the call value\n");
   if (num > 0)
   {
      for ( i = 0; i < num; i++)
      {
         printf("Row input %d call value\n", i);
         for (j = 0; j < num; j++)
         {
            scanf("%d",&arr[i][j]);
         }
      }

      printf("\nResult\n");
      for (i = 0; i < num; i++)
      {
         sum = 0;
         for (j = 0; j < num; j++)
         {
            sum += arr[j][i];
         }
         arr[num][i] = sum;
      }

      for (i = 0; i < num; i++)
      {
         sum = 0;
         for (j = 0; j < num; i++)
         {
            sum += arr[i][j];
         }
         arr[i][num] = sum;
      }

      sum = 0;
      for (i = 0; i < num; i++)
      {
         sum += arr[num][i];
      }
      arr[num][num] = sum;

      for (i = 0; i < num + 1; i++)
      {
         for (j = 0; j < num + 1; j++)
         {
            printf("%5d",arr[i][j]);
         }
         printf("\n");
      }
   }
   return 0;
}
