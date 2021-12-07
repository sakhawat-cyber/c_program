/* Write a program in C to return only the unique rows
from a given binary matrix.
Expected Output:
The given array is :
0 1 0 0 1
1 0 1 1 0
0 1 0 0 1
1 0 1 0 0
The unique rows of the given array are :
0 1 0 0 1
1 0 1 1 0
1 0 1 0 0 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define row 4
#define col 5

typedef struct Node
{
    bool check_end_of_col;
    struct Node *child[2];
} my_node;

my_node *new_node()
{
    my_node *temp = (my_node *)malloc(sizeof(my_node));
    temp->check_end_of_col = 0;
    temp->child[0] = temp->child[1] = NULL;
    return temp;
}

bool insert(my_node **root, int (*arr)[col], int r, int c)
{
    if (*root == NULL)
        *root = new_node();
    if (c < col)
        return insert(&((*root)->child[arr[r][c]]), arr, r, c + 1);
    else
    {
        if (!((*root)->check_end_of_col))
            return (*root)->check_end_of_col = 1;
        return 0;
    }
}

void PrintRow(int (*arr)[col], int r)
{
    int i;
    for (i = 0; i < col; ++i)
        printf("%d ", arr[r][i]);
    printf("\n");
}

void FindUniqeRows(int (*arr)[col])
{

    int i;
    my_node *root = NULL;
    printf("The unique rows of the given array are: \n");
    for (i = 0; i < row; ++i)
        if (insert(&root, arr, i, 0))
            PrintRow(arr, i);
}

int main()
{
    int arr[4][5] = {
        {0, 1, 0, 0, 1},
        {1, 0, 1, 1, 0},
        {0, 1, 0, 0, 1},
        {1, 0, 1, 0, 0}},
        i, j;
    printf("The given array is: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    FindUniqeRows(arr);
    return 0;
}