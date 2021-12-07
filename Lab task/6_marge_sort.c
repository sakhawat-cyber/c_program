#include <stdio.h>

int main()
{
   int ar1[10], ar2[10], ar3[20];
   int s1, s2, s3;
   int i, j, k;

   printf("Enter number:");
   scanf("%d", &s1);

   printf("\nEnter the %d element of number:\n", s1);
   for (i = 0; i < s1; i++)
   {
      printf("s1[%d]:", i);
      scanf("%d", &ar1[i]);
   }

   printf("\nEnter number:");
   scanf("%d", &s2);

   printf("\nEnter the %d element of number:\n", s2);
   for (i = 0; i < s2; i++)
   {
      printf("s2[%d]:", i);
      scanf("%d", &ar2[i]);
   }
   /*
    s size of merged array issize of first array*/
   s3 = s1 + s2;

   for (i = 0; i < s1; i++)
   {
      ar3[i] = ar1[i];
   }
   /*front the array in descending order*/
   for (j = 0; j < s2; j++)
   {
      ar3[i] = ar2[j];
      i++;
   }

   for (i = 0; i < s3; i++)
   {
      for (k = 0; k < s3 - 1; k++)
      {
         if (ar3[k] >= ar3[k + 1])
         {
            j = ar3[k + 1];
            ar3[k + 1] = ar3[k];
            ar3[k] = j;
         }
      }
   }
   //prints the merged array
   printf("\nThe merged array in descending:\n");
   for (i = 0; i < s3; i++)
   {
      printf("%d ", ar3[i]);
   }

   return 0;
}