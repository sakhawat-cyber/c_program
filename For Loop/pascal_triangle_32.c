/* Write a C program to display Pascal's 
triangle.
 Test Data :
Input number of rows: 5
Expected Output :

        1
      1   1 
    1   2   1 
  1   3   3   1
1   4   6   4   1  */

#include<stdio.h>
int main()
{
    int n, row, col;
    printf("Enter the number: ");
    scanf("%d", &n);
    for(row = 1; row <= n; row++)
    {
      for(col = 1; col <= n - row; col++)
      {
        printf(" ");
      }
      for(col = 1; col <= row; col++)
      {
        printf("%d", col);
      }
      for(col = row -1; col >= 1; col--)
      {
        printf("%d",col);
      }
      printf("\n");
    }
}