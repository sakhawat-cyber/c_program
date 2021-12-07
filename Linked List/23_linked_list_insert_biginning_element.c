/*
Write a program in C to insert a node at the beginning of a circular linked list.
Test Data and Expected Output :

Input the number of nodes : 3                                                                                
 Input data for node 1 : 2                                                                                    
 Input data for node 2 : 5                                                                                    
 Input data for node 3 : 8                                                                                    
                                                                                                              
 Data entered in the list are :                                                                               
 Data 1 = 2                                                                                                   
 Data 2 = 5                                                                                                   
 Data 3 = 8                                                                                                   
 Input data to be inserted at the beginning : 1                                                               
                                                                                                              
 After insertion the new list are :                                                                           
 Data 1 = 1                                                                                                   
 Data 2 = 2                                                                                                   
 Data 3 = 5                                                                                                   
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
void InsertNodeBeginning(int num);
void DisplayList(int a);

int main()
{
    int n, a, num1;
    str_node = NULL;

    printf("Input the numbers of nodes: ");
    scanf("%d", &n);
    CreateNodeList(n);
    a = 1;
    DisplayList(a);
    printf("Input data to be inserted at the beginning: ");
    scanf("%d", &num1);
    InsertNodeBeginning(num1);
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

void InsertNodeBeginning(int num)
{
    struct node *new_node, *cur_node;
    if(str_node == NULL)
        printf("No data found in the list yet.");
    else
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node -> num = num;
        new_node -> next_node = str_node;
        cur_node = str_node;
        while(cur_node -> next_node != str_node)
            cur_node = cur_node -> next_node;
        cur_node -> next_node = new_node;
        str_node = new_node;
    }
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
        }while (temp != str_node);
    }
}