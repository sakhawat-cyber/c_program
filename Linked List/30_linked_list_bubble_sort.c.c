/* 
Write a C programming to sort a given linked list by bubble sort.
Test Data and Expected Output : 5
15
33
49
6
65

 Input number of elements in the linked list? Input the elements 
 in the linked list:
Sorted order is: 
6	15	33	49	65
*/
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    int n, k, i, j;
    struct node *start_list, *new_node, *temp1, *temp2, *q;
    start_list = NULL;

    printf("Input the number of nodes: ");
    scanf("%d", &n);
    printf("Input the elements in the linked list: \n");
    for(i = 1; i <= n; i++)
    {
        if(start_list == NULL)
        {
            new_node = (struct node *)malloc (sizeof(struct node));
            scanf("%d", &new_node->data);
            new_node ->next = NULL;
            start_list = new_node;
            temp1 = start_list;
        }
        else
        {
            new_node = (struct node *)malloc (sizeof(struct node));
            scanf("%d", &new_node ->data);
            new_node ->next = NULL;
            temp1 ->next = new_node;
            temp1 = new_node;
        }
    }
    for(i = n - 2; i >= 0; i--)
    {
        temp1 = start_list;
        temp2 = temp1->next;
        for(j = 0; j <= i; j++)
        {
            if(temp1 ->data > temp2 -> data)
            {
                k = temp1 ->data;
                temp1 ->data = temp2 -> data;
                temp2 ->data = k;
            }
            temp1 = temp2;
            temp2 = temp2->next;
        }
    }
    printf("stored order is: \n");
    q = start_list;
    while(q != NULL)
    {
        printf("%d\t", q ->data);
        q = q->next;
    }
}