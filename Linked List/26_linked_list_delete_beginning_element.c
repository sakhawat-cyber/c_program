/* 
Write a program in C to delete node from the beginning of a circular linked list.
Test Data :
Input the number of nodes : 3
Input data for node 1 : 2
Input data for node 2 : 5
Input data for node 3 : 8
Expected Output :

 Data entered in the list are :                                                                               
 Data 1 = 2                                                                                                   
 Data 2 = 5                                                                                                   
 Data 3 = 8                                                                                                   
                                                                                                              
 The deleted node is -> 2                                                                                     
 After deletion the new list are :                                                                            
 Data 1 = 5                                                                                                   
 Data 2 = 8 
*/

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int num;
    struct node *next_node;
} * str_node;
struct node *p, *store;

void CreateNodeList(int n);
void DeleteFirstNode();
void DisplayList(int m);

int main()
{
    int n, a;
    str_node = NULL;

    printf("Input the number of nodes: ");
    scanf("%d", &n);
    CreateNodeList(n);
    a = 1;
    DisplayList(a);
    DeleteFirstNode();
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

void DeleteFirstNode()
{
    p = str_node;

    while (p->next_node != str_node)
    {
        p = p->next_node;
    }
    store = str_node;
    str_node = str_node->next_node;
    printf("\nThe deleted node is -> %d", store->num);
    p->next_node = str_node;
    free(store);
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
            printf("\nData entered in the list: \n");
        else
            printf("\nAfter Deletion the new node list are: \n");
        do
        {
            printf("Data %d = %d\n", n, temp->num);
            temp = temp->next_node;
            n++;
        } while (temp != str_node);
    }
}