/*  Write a C program to find whether a given year is a leap year or not.
Test Data : 2016
Expected Output :
2016 is a leap year. */

int main()
{
     int n1;
     printf("Input a number: ");
     scanf("%d",&n1);
     if(((n1 % 400) == 0) && ((n1 % 100) == 0) && ((n1 % 4) == 0))
          printf("%d is a leep year.",n1);
     else
          printf("%d is not a leep year.",n1);
     return 0;
}