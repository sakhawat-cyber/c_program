/* 
Write a program in C to delete a node from any position of a doubly linked list.
Test Data and Expected Output :

 Doubly Linked List : Delete node from any position of a doubly linked list :                                 
----------------------------------------------------------------------------------                            
 Input the number of nodes (3 or more ): 3                                                                    
 Input data for node 1 : 1                                                                                    
 Input data for node 2 : 2                                                                                    
 Input data for node 3 : 3                                                                                    
                                                                                                              
 Data entered in the list are :                                                                               
 node 1 : 1                                                                                                   
 node 2 : 2                                                                                                   
 node 3 : 3                                                                                                   
 Input the position ( 1 to 3 ) to delete a node : 3                                                           
                                                                                                              
 After deletion the new list are :                                                                            
 node 1 : 1                                                                                                   
 node 2 : 2 
*/

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int num;
    struct node *temp;
    struct node *next_node;
} * str_node, *end_node;

void CreateNodeList(int n);
void FirstDeleteNode();
void LastDeleteNode();
void DeleteAnyNode(int pos);
void DisplayList(int n);

int main()
{
    int n, a, insert_place;
    str_node = NULL;
    end_node = NULL;

    printf("Input the number of nodes (3 or more ): ");
    scanf("%d", &n);
    CreateNodeList(n);
    a = 1;
    DisplayList(a);
    printf("Input the position (1 to %d) to delete a node: ", n);
    scanf("%d", &insert_place);

    if (insert_place < 1 || insert_place > n)
        printf("\nInvlid position.Try again.\n");
    if (insert_place >= 1 && insert_place <= n)
    {
        DeleteAnyNode(insert_place);
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
            str_node->next_node = NULL;
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
                    find_node->next_node = NULL;
                    end_node->next_node = find_node;
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
            printf("Memory can not be alocatead.");
    }
}

void DeleteAnyNode(int pos)
{
    struct node *cur_node;
    int i;

    cur_node = str_node;
    for (i = 1; i < pos && cur_node != NULL; i++)
        cur_node = cur_node->next_node;
    if (pos == 1)
        FirstDeleteNode();
    else if (cur_node == end_node)
        LastDeleteNode();
    else if (cur_node != NULL)
    {
        cur_node->temp->next_node = cur_node->next_node;
        cur_node->next_node->temp = cur_node->temp;
        free(cur_node);
    }
    else
        printf("The given position in invalid!");
}
void FirstDeleteNode()
{
    struct node *node_del;

    if (str_node == NULL)
        printf("Delete is possible.\n");
    else
    {
        node_del = str_node;
        str_node = str_node->next_node;
        str_node->temp = NULL;
        free(node_del);
    }
}

void LastDeleteNode()
{
    struct node *node_del;

    if (end_node == NULL)
        printf("Delete is not possible. No data in the list.\n");
    else
    {
        node_del = end_node;
        end_node = end_node->temp;
        end_node->next_node = NULL;
        free(node_del);
    }
}

void DisplayList(int m)
{
    struct node *temp;
    int n = 1;
    if (str_node == NULL)
        printf("List of empty data.");
    else
    {
        temp = str_node;
        if (m == 1)
            printf("\nData entred in the list: \n");
        else
            printf("\nAfter deletion the new list are: \n");
        while (temp != NULL)
        {
            printf("Node %d = %d\n", n, temp->num);
            n++;
            temp = temp->next_node;
        }
    }
}