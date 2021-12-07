#include<stdio.h>
int main()
{
    int n;
    double arr[100];

    printf("Enter the number of element: ");
    scanf("%d", &n);

    for(int i = 0; i < n; ++i)
    {
        printf("Enter the number %d : ", i + 1);
        scanf("%lf",&arr[i]);
    }

    // strong the largest number to arr[0]
    for(int i = 1; i < n; ++i)
    {
        if(arr[0] < arr[i])
        {
            arr[0] = arr[i];
        }
    }

    printf("Maximum element : %.2lf", arr[0]);
    return 0;
}