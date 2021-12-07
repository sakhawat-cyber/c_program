/* Write a program in C to delete a node from the middle of a circular linked list.
Test Data and Expected Output :

Input the number of nodes : 3                                                                                
 Input data for node 1 : 2                                                                                    
 Input data for node 2 : 5                                                                                    
 Input data for node 3 : 8                                                                                    
                                                                                                              
 Data entered in the list are :                                                                               
 Data 1 = 2                                                                                                   
 Data 2 = 5                                                                                                   
 Data 3 = 8                                                                                                   
                                                                                                              
 Input the position to delete the node : 2                                                                    
                                                                                                              
 The deleted node is : 5                                                                                      
 After deletion the new list are :                                                                            
 Data 1 = 2                                                                                                   
 Data 3 = 8  
*/

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int num;
    struct node *next_node;
} * str_node;

struct node *p, *q;

void createNodeList(int n);
void DeleteMeddleNode(int pos);
void DisplayList(int a);

int main()
{
    int n, a, pos;
    //str_node = NULL;

    printf("Input the numbers of nodes: ");
    scanf("%d", &n);
    createNodeList(n);
    a = 1;
    DisplayList(a);
    printf("\nInput the position to delete the node: ");
    scanf("%d", &pos);
    DeleteMeddleNode(pos);
    a = 2;
    DisplayList(a);
    return 0;
}

void createNodeList(int n)
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

void DeleteMeddleNode(int pos)
{
    int del_node, k = 1;
    del_node = pos;
    p = str_node;

    while (k != del_node)
    {
        q = p;
        p = p->next_node;
        k++;
    }
    q->next_node = p->next_node;
    printf("\nThe deleted node is : %d", p->num);
    free(p);
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
            printf("\nData entered in the list: \n");
        else
            printf("\nAfter deletion the new list are: \n");
        do
        {
            printf("Data %d = %d\n", n, temp->num);
            temp = temp->next_node;
            n++;
        } while (temp != str_node);
    }
}