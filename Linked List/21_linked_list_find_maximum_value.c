/* 
Write a program in C to find the maximum value from a doubly linked list.
Test Data :
Input the number of nodes : 3
Input data for node 1 : 5
Input data for node 2 : 9
Input data for node 3 : 1
Expected Output :

 Data entered in the list are :                                                                               
 node 1 : 5                                                                                                   
 node 2 : 9                                                                                                   
 node 3 : 1                                                                                                   
                                                                                                              
 The Maximum Value in the Linked List : 9
*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct node
{
    int num;
    struct node *temp;
    struct node *next_ptr;
} * str_node, *end_node;

void CreateNodeList(int n);
int GetMaxNode(struct node *str_node);
void DisplayList();

int main()
{
    int n;
    str_node = NULL;
    end_node = NULL;

    printf("Input the number of nodes: ");
    scanf("%d", &n);
    CreateNodeList(n);
    DisplayList();

    printf("\nThe Maximum Value in the linked list: %d\n\n", GetMaxNode(str_node));

    return 0;
}

void CreateNodeList(int n)
{
    int num, i;
    struct node *find_node;

    if (n >= 1)
    {
        str_node = (struct node *)malloc(sizeof(struct node));
        if (str_node != NULL)
        {
            printf("Input data for node 1: ");
            scanf("%d", &num);
            str_node->num = num;
            str_node->temp = NULL;
            str_node->next_ptr = NULL;
            end_node = str_node;
            for (i = 2; i <= n; i++)
            {
                find_node = (struct node *)malloc(sizeof(struct node));
                if (find_node != NULL)
                {
                    printf("Input data for node %d: ", i);
                    scanf("%d", &num);
                    find_node->num = num;
                    find_node->temp = end_node;
                    find_node->next_ptr = NULL;
                    end_node->next_ptr = find_node;
                    end_node = find_node;
                }
                else
                {
                    printf("Memory can not be alocated.");
                    break;
                }
            }
        }
        else
            printf("Memory can not be alocated.");
    }
}

int GetMaxNode(struct node *str_node)
{
    if (str_node == NULL)
    {
        printf("User message : Invalid input !!!\n");
        return INT_MIN;
    }
    int max = str_node->num;
    while (str_node != NULL)
    {
        if (str_node->num > max)
            max = str_node->num;
        str_node = str_node->next_ptr;
    }
    return max;
}

void DisplayList()
{
    struct node *temp;
    int n = 1;

    if (str_node == NULL)
        printf("List of data empty.");
    else
    {
        temp = str_node;
        printf("\nData entered in the list: \n");
        while (temp != NULL)
        {
            printf("Data %d = %d\n", n, temp->num);
            n++;
            temp = temp->next_ptr;
        }
    }
}