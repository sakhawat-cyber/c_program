/* Write a C program to sort the elements of an array.

Test Data and Expected Output :

Input the number of elements to be stored in the array :5               
Input 6 elements in the array :                                         
element - 0 : 15                                                        
element - 1 : 26                                                        
element - 2 : 42                                                        
element - 3 : 82                                                        
element - 4 : 35                                                        
                                                                        
After sortngi the array are :                                           
15                                                                      
26                                                                      
35                                                                      
42                                                                      
82 */

#include <stdio.h>
#include <stdlib.h>

int comparetor(const void *x, const void *y)
{
    return (*(int *)x - *(int *)y);
}

int main()
{
    int num, array[100];
    printf("Input the number of element to be stored in the array: ");
    scanf("%d", &num);

    printf("Input 6 elements in the array: \n");
    for (int i = 0; i < num; i++)
    {
        printf("element - [%d] :", i);
        scanf("%d", &array[i]);
    }

    qsort(array, num, sizeof(int), comparetor);

    printf("\nAfter sorting the array are: \n");
    for (int i = 0; i < num; i++)
    {
        printf("%d \n", array[i]);
    }
    return 0;
}

