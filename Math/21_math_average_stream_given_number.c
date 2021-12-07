/*
Write a C program to calculate and print average (or mean) of the stream of given numbers. 
Example 1:
Input:
arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100}
Output:
Average of 1 numbers is 10.000000
Average of 2 numbers is 15.000000
Average of 3 numbers is 20.000000
Average of 4 numbers is 25.000000
Average of 5 numbers is 30.000000
Average of 6 numbers is 35.000000
Average of 7 numbers is 40.000000
Average of 8 numbers is 45.000000
Average of 9 numbers is 50.000000
Average of 10 numbers is 55.000000
*/

#include <stdio.h>
#include <stdlib.h>
void StreamAvg(float arr[], int num)
{
    float avg = 0;
    int i = 0;
    while (i < num)
    {
        avg = (avg * i + arr[i]) / (i + 1);
        printf("Average of %d number is %f\n", i + 1, avg);
        i++;
    }
    return;
}

int main()
{
    int num, i;
    float arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    num = sizeof(arr) / sizeof(arr[0]);
    for (i = 0; i < num; i++)
    {
        printf("\nElement in array %d: ", i);
        printf("%f", arr[i]);
    }
    printf("\n\n");
    StreamAvg(arr, num);
    return 0;
}