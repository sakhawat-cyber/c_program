/*
Write a program in C to insert a node at any position in a circular linked list.
Test Data and Expected Output :

Input the number of nodes : 3                                                                                
 Input data for node 1 : 2                                                                                    
 Input data for node 2 : 5                                                                                    
 Input data for node 3 : 8                                                                                    
                                                                                                              
 Data entered in the list are :                                                                               
 Data 1 = 2                                                                                                   
 Data 2 = 5                                                                                                   
 Data 3 = 8                                                                                                   
 Input the position to insert a new node : 3                                                                  
 Input data for the position 3 : 7                                                                            
                                                                                                              
 After insertion the new list are :                                                                           
 Data 1 = 2                                                                                                   
 Data 2 = 5                                                                                                   
 Data 3 = 7                                                                                                   
 Data 4 = 8
*/

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int num;
    struct node *next_node;
} * str_node;

void CreateNodeList(int n);
void NodeBeginning(int num);
void InsertNodeAny(int num, int pos);
void DisplayList(int a);

int main()
{
    int n, a, insert_place, num1;
    str_node = NULL;

    printf("Input the number of nodes: ");
    scanf("%d", &n);
    CreateNodeList(n);
    a = 1;
    DisplayList(a);
    printf("Input the position to insert a new node: ");
    scanf("%d", &insert_place);
    printf("Input data for the position %d: ", insert_place);
    scanf("%d", &num1);
    InsertNodeAny(num1, insert_place);
    a = 2;
    DisplayList(a);
    return 0;
}

void CreateNodeList(int n)
{
    int num, i;
    struct node *find_node, *temp;

    str_node = (struct node *)malloc(sizeof(struct node));
    if (n >= 1)
    {
        printf("Input data for node 1: ");
        scanf("%d", &num);
        str_node->num = num;
        str_node->next_node = NULL;
        temp = str_node;
        for (i = 2; i <= n; i++)
        {
            find_node = (struct node *)malloc(sizeof(struct node));
            printf("Input data for node %d: ", i);
            scanf("%d", &num);
            find_node->num = num;
            find_node->next_node = NULL;
            temp->next_node = find_node;
            temp = find_node;
        }
        temp->next_node = str_node;
    }
}

void NodeBeginning(int num)
{
    struct node *new_node, *cur_node;
    if (str_node == NULL)
        printf("No data in the list yet.");
    else
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node->num = num;
        new_node->next_node = str_node;
        cur_node = str_node;
        while (cur_node->next_node != str_node)
        {
            cur_node = cur_node->next_node;
        }
        cur_node->next_node = new_node;
        str_node = new_node;
    }
}

void InsertNodeAny(int num, int pos)
{
    struct node *new_node, *cur_node;
    int i;

    if (str_node == NULL)
        printf("No data found in the list yet.");
    else if (pos == 1)
        NodeBeginning(num);
    else
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node->num = num;
        cur_node = str_node;
        for (i = 2; i <= pos - 1; i++)
            cur_node = cur_node->next_node;
        new_node->next_node = cur_node->next_node;
        cur_node->next_node = new_node;
    }
}

void DisplayList(int a)
{
    struct node *temp;
    int n = 1;

    if (str_node == NULL)
        printf("List of data empty.");
    else
    {
        temp = str_node;
        if (a == 1)
            printf("\nData entered list in the node: \n");
        else
            printf("\nAfter insertion the new list are: \n");
        do
        {
            printf("Data %d = %d\n", n, temp->num);
            temp = temp->next_node;
            n++;
        } while (temp != str_node);
    }
}