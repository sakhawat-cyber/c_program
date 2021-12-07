/* Write a program in C to insert a new node at the end of a Singly Linked List.
Test Data and Expected Output :

Input the number of nodes : 3                                                                                
 Input data for node 1 : 5                                                                                    
 Input data for node 2 : 6                                                                                    
 Input data for node 3 : 7                                                                                    
                                                                                                              
 Data entered in the list are :                                                                               
 Data = 5                                                                                                     
 Data = 6                                                                                                     
 Data = 7                                                                                                     
                                                                                                              
 Input data to insert at the end of the list : 8                                                              
                                                                                                              
 Data, after inserted in the list are :                                                                       
 Data = 5                                                                                                     
 Data = 6                                                                                                     
 Data = 7                                                                                                     
 Data = 8   */

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int num;
    struct node *next_ptr;
} * str_node;

void CreatNodeList(int n);
void InsertNodeEnd(int num);
void DisplayList();

int main()
{
    int n, num;
    printf("Input the number of no: ");
    scanf("%d", &n);
    CreatNodeList(n);
    printf("\nData entred in the list are : \n");
    DisplayList();

    printf("\nInput data to insert at the end of the list: ");
    scanf("%d", &num);
    InsertNodeEnd(num);
    
    printf("\nData, after inserted in the list are: \n");
    DisplayList();
    return 0;
}

void CreatNodeList(int n)
{
    int num, i;
    struct node *find_node, *temp;

    str_node = (struct node *)malloc(sizeof(struct node));
    if (str_node == NULL)
    {
        printf("Memory can not be allocted.");
    }
    else
    {
        printf("Input data for node 1: ");
        scanf("%d", &num);
        str_node->num = num;
        //links the address filed to null
        str_node->next_ptr = NULL;
        temp = str_node;
        //creats n nodes and adds to linked list
        for (i = 2; i <= n; i++)
        {
            find_node = (struct node *)malloc(sizeof(struct node));
            if (find_node == NULL)
            {
                printf("Memory can not be allocted.");
                break;
            }
            else
            {
                printf("Input data for node %d: ", i);
                scanf("%d", &num);
                find_node->num = num;
                find_node->next_ptr = NULL;
                temp->next_ptr = find_node;
                temp = temp->next_ptr;
            }
        }
    }
}

void InsertNodeEnd(int num)
{
    struct node *find_node, *temp;

    find_node = (struct node *)malloc(sizeof(struct node));
    if (find_node == NULL)
        printf("Memory can not be allocted.");
    else
    {
        find_node->num = num;
        find_node->next_ptr = NULL;
        temp = str_node;
        while (temp->next_ptr != NULL)
            temp = temp->next_ptr;
        temp->next_ptr = find_node;
    }
}

void DisplayList()
{
    struct node *temp;
    if (str_node == NULL)
    {
        printf("No data found in the list.");
    }
    else
    {
        temp = str_node;
        while (temp != NULL)
        {
            printf("Data = %d\n", temp->num);
            temp = temp->next_ptr;
        }
    }
}