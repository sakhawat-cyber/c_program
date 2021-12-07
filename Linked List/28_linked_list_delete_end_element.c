/*  Write a program in C to delete the node at the end of a circular linked list.
Test Data and Expected Output :

Input the number of nodes : 3                                                                                
 Input data for node 1 : 2                                                                                    
 Input data for node 2 : 5                                                                                    
 Input data for node 3 : 8                                                                                    
                                                                                                              
 Data entered in the list are :                                                                               
 Data 1 = 2                                                                                                   
 Data 2 = 5                                                                                                   
 Data 3 = 8                                                                                                   
                                                                                                              
 The deleted node is : 8                                                                                      
 After deletion the new list are :                                                                            
 Data 1 = 2                                                                                                   
 Data 2 = 5  
*/

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int num;
    struct node *next_ptr;
} * str_node;

struct node *tail, *p, *q, *store;

void CreateNodeList(int n);
void DeletionNode();
void DisplayList(int a);

int main()
{
    int n, a;
    str_node = NULL;

    printf("Input the number of nodes: ");
    scanf("%d", &n);
    CreateNodeList(n);
    a = 1;
    DisplayList(a);
    DeletionNode();
    a = 2;
    DisplayList(a);
    return 0;
}
void CreateNodeList(int n)
{
    int num, i;
    struct node *find_node, *temp;

    if (n >= 1)
    {
        str_node = (struct node *)malloc(sizeof(struct node));
        printf("Input data for node 1: ");
        scanf("%d", &num);
        str_node->num = num;
        str_node->next_ptr = NULL;
        temp = str_node;
        for (i = 2; i <= n; i++)
        {
            find_node = (struct node *)malloc(sizeof(struct node));
            printf("Input data for node %d: ", i);
            scanf("%d", &num);
            find_node->num = num;
            find_node->next_ptr = NULL;
            temp->next_ptr = find_node;
            temp = find_node;
        }
        temp->next_ptr = str_node;
    }
}

void DeletionNode()
{
    p = str_node;
    while (p->next_ptr != str_node)
    {
        q = p;
        p = p->next_ptr;
    }
    q->next_ptr = str_node;
    printf("\nThe deleted node is: %d", p->num);
    free(p);
}

void DisplayList(int m)
{
    struct node *temp;
    int n = 1;
    if (str_node == NULL)
        printf("List of data empty.");

    else
    {
        temp = str_node;
        if (m == 1)
            printf("\nData entered in the list are: \n");
        else
            printf("\nAfter deletion the new list are: \n");
        do
        {
            printf("Data %d = %d\n", n, temp->num);
            temp = temp->next_ptr;
            n++;
        } while (temp != str_node);
    }
}