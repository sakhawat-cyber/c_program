/*
Write a program in C to delete a node from the middle of a doubly linked list.
Test Data and Expected Output :

Input the number of nodes (3 or more ): 3                                                                    
 Input data for node 1 : 1                                                                                    
 Input data for node 2 : 2                                                                                    
 Input data for node 3 : 3                                                                                    
                                                                                                              
 Data entered in the list are :                                                                               
 node 1 : 1                                                                                                   
 node 2 : 2                                                                                                   
 node 3 : 3                                                                                                   
 Input the position ( 1 to 3 ) to delete a node : 2                                                           
                                                                                                              
 After deletion the new list are :                                                                            
 node 1 : 1                                                                                                   
 node 2 : 3   
*/

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int num;
    struct node *temp;
    struct node *next_ptr;
} * str_node, *end_node;

void CreateNodeList(int n);
void DeleteMiddleNode(int pos);
void DisplayList(int a);

int main()
{
    int n, a, insert_place;
    str_node = NULL;
    end_node = NULL;
    
    printf("Input the number of nodes: ");
    scanf("%d", &n);
    CreateNodeList(n);
    a = 1;
    DisplayList(a);

    printf("Input the position (2 to %d) to delete a node: ", n - 1);
    scanf("%d", &insert_place);

    if (insert_place <= 1 || insert_place >= n)
    {
        printf("\nInvlid position.Try again.\n");
    }
    if (insert_place > 1 && insert_place < n)
    {
        DeleteMiddleNode(insert_place);
        a = 2;
        DisplayList(a);
    }
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

void DeleteMiddleNode(int pos)
{
    struct node *cur_node;
    int i;

    cur_node = str_node;
    for (i = 1; i < pos && cur_node != NULL; i++)
    {
        cur_node = cur_node->next_ptr;
    }
    if (cur_node != NULL)
    {
        cur_node->temp->next_ptr = cur_node->next_ptr;
        cur_node->next_ptr->temp = cur_node->temp;
        free(cur_node);
    }
    else
        printf("The given position inalid!\n");
}

void DisplayList(int m)
{
    struct node *temp;
    int n = 1;
    if (str_node == NULL)
    {
        printf("List of data empty.");
    }
    else
    {
        temp = str_node;
        if (m == 1)
            printf("\nData entered in the list: \n");
        else
            printf("\nAfter deletion the new list are: \n");

        while (temp != NULL)
        {
            printf("Data = %d\n", temp->num);
            n++;
            temp = temp->next_ptr;
        }
    }
}