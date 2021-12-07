#include<stdio.h>
int main()
{
    int n1, n2, i, j, arr1[50][50], arr2[20][20], sum[20][20];
    printf("Enter the row and column number: ");
    scanf("%d", &n1);

    printf("Enter the first array element.\n");
    for(i = 0; i < n1; i++)
    {
        for(j = 0; j < n1; j++)
        {
            printf("A[%d][%d]: ",i ,j);
            scanf("%d", &arr1[i][j]);
        }
        printf("\n");
    }

    printf("First Matrix: \n");
    for(i = 0; i < n1; i++)
    {
        for(j = 0; j < n1; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }

    printf("Enter the Secend array element.\n");
    for(i = 0; i < n1; i++)
    {
        for(j = 0; j < n1; j++)
        {
            printf("A[%d][%d]: ",i ,j);
            scanf("%d", &arr2[i][j]);
        }
        printf("\n");
    }

    printf("Secend Matrix: \n");
    for(i = 0; i < n1; i++)
    {
        for(j = 0; j < n1; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
    
    for(i = 0; i < n1; i++)
    {
        for(j = 0; j < n1; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    printf("Sum: \n");

    for(i = 0; i < n1; i++)
    {
        for(j = 0; j < n1; j++)
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
}
    