/* 
Write a program in C to insert a new node at the beginning in a doubly linked list.
Test Data and Expected Output :

 Input the number of nodes : 3                                                                                
 Input data for node 1 : 2                                                                                    
 Input data for node 2 : 5                                                                                    
 Input data for node 3 : 8                                                                                    
                                                                                                              
 Data entered in the list are :                                                                               
 node 1 : 2                                                                                                   
 node 2 : 5                                                                                                   
 node 3 : 8                                                                                                   
 Input data for the first node : 1                                                                            
                                                                                                              
 After insertion the new list are :                                                                           
 node 1 : 1                                                                                                   
 node 2 : 2                                                                                                   
 node 3 : 5                                                                                                   
 node 4 : 8  
*/

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int num;
    struct node *temp;
    struct node *next_ptr;
} * str_node, *end_nod;

void CreateNodeList(int n);
void InsertNodeBeginning(int num);
void DisplayList(int a);

int main()
{
    int n, a, insert_place;
    str_node = NULL;
    end_nod = NULL;

    printf("Input the number of nodes: ");
    scanf("%d", &n);
    CreateNodeList(n);
    a = 1;
    DisplayList(a);

    printf("\nAfter the insertion the new node: ");
    scanf("%d", &insert_place);
    InsertNodeBeginning(insert_place);
    a = 2;
    DisplayList(a);
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
            end_nod = str_node;
            for (i = 2; i <= n; i++)
            {
                find_node = (struct node *)malloc(sizeof(struct node));
                if (find_node != NULL)
                {
                    printf("Input data for node %d: ", i);
                    scanf("%d", &num);
                    find_node->num = num;
                    find_node->temp = end_nod;
                    find_node->next_ptr = NULL;
                    end_nod->next_ptr = find_node;
                    end_nod = find_node;
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

void InsertNodeBeginning(int num)
{
    struct node *new_node;

    if (str_node == NULL)
        printf("No data found in the list!\n");
    else
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node->num = num;
        new_node->next_ptr = str_node;
        new_node->temp = NULL;
        str_node->temp = new_node;
        str_node = new_node;
    }
}

void DisplayList(int m)
{
    struct node *temp;
    int n = 1;
    if (str_node == NULL)
        printf("List of data.");
    else
    {
        temp = str_node;
        if (m == 1)
            printf("\nData entered in the list: \n");
        else
            printf("\nAfter the insertion  in the list: \n");
        while (temp != NULL)
        {
            printf("Data %d = %d\n", n, temp->num);
            n++;
            temp = temp->next_ptr;
        }
    }
}