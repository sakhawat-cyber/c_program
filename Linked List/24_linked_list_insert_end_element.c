/* 
 Write a program in C to insert a node at the end of a circular linked list.
Test Data and Expected Output :

Input the number of nodes : 3                                                                                
 Input data for node 1 : 2                                                                                    
 Input data for node 2 : 5                                                                                    
 Input data for node 3 : 8                                                                                    
                                                                                                              
 Data entered in the list are :                                                                               
 Data 1 = 2                                                                                                   
 Data 2 = 5                                                                                                   
 Data 3 = 8                                                                                                   
 Input the data to be inserted : 9                                                                            
                                                                                                              
 After insertion the new list are :                                                                           
 Data 1 = 2                                                                                                   
 Data 2 = 5                                                                                                   
 Data 3 = 8                                                                                                   
 Data 4 = 9 
*/

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int num;
    struct node *next_node;
} * str_node;

struct node *p;

void CreateNodeList(int n);
void InsertNodeEnd(int num1);
void DisplayList(int m);

int main()
{
    int n, m, a, num;
    str_node = NULL;

    printf("Input the number of nodes: ");
    scanf("%d", &n);
    CreateNodeList(n);
    a = 1;
    DisplayList(a);
    printf("Input the data to be inserted: ");
    scanf("%d", &num);
    InsertNodeEnd(num);
    a = 2;
    DisplayList(m);
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

void InsertNodeEnd(int num1)
{
    int a;
    a = num1;

    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->num = a;
    p = str_node;
    while (p->next_node != str_node)
        p = p->next_node;
    p->next_node = temp;
    temp->next_node = str_node;
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
            printf("\nAfter insertion the new list are: \n");
        do
        {
            printf("Data %d = %d\n", n, temp->num);
            temp = temp->next_node;
            n++;
        } while (temp != str_node);
    }
}