/* Write a program in C to sort an array using Pointer.
Test Data :
testdata
Expected Output :

Test Data :
Input the number of elements to store in the array : 5
Input 5 number of elements in the array :
element - 1 : 25
element - 2 : 45
element - 3 : 89
element - 4 : 15
element - 5 : 82
Expected Output :
                                                                                           
 The elements in the array after sorting :                                                                    
 element - 1 : 15                                                                                             
 element - 2 : 25                                                                                             
 element - 3 : 45                                                                                             
 element - 4 : 82                                                                                             
 element - 5 : 89   */

#include <stdio.h>
int main()
{
    int arr[20], i, j, n, temp;
    printf("Input the number of element to store in the array: ");
    scanf("%d", &n);

    printf("\nInput %d number of elements in the array: \n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d: ", i + 1);
        scanf("%d", arr + i);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (*(arr + i) > *(arr + j))
            {
                temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }

    printf("\nThe element in the array after sorting : \n");
    for (i = 0; i < n; i++)
    {
        printf("element - %d: ", i + 1);
        printf("%d\n", *(arr + i));
    }
}