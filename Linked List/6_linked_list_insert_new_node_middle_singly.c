/* 
Write a program in C to insert a new node at the middle of Singly Linked List.
Test Data and Expected Output :

Input the number of nodes (3 or more) : 4                                                                    
 Input data for node 1 : 1                                                                                    
 Input data for node 2 : 2                                                                                    
 Input data for node 3 : 3                                                                                    
 Input data for node 4 : 4                                                                                    
                                                                                                              
 Data entered in the list are :                                                                               
 Data = 1                                                                                                     
 Data = 2                                                                                                     
 Data = 3                                                                                                     
 Data = 4                                                                                                     
                                                                                                              
 Input data to insert in the middle of the list : 5                                                           
 Input the position to insert new node : 3                                                                    
                                                                                                              
 Insertion completed successfully.                                                                             
                                                                                                              
 The new list are :                                                                                           
 Data = 1                                                                                                     
 Data = 2                                                                                                     
 Data = 5                                                                                                     
 Data = 3                                                                                                     
 Data = 4  
*/

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int num;
    struct node *next_ptr;
} * str_node;

void CreatNodeList(int n);
void InsertDeleteMiddle(int num, int pos);
void DisplayList();

int main()
{
    int n, num, pos;

    printf("Input the number of nodes: ");
    scanf("%d", &n);
    CreatNodeList(n);
    printf("\nData entered in the list: \n");
    DisplayList();
    printf("Input data to insert in the middle of the list: ");
    scanf("%d", &num);
    printf("Input the possition to insert new node: ");
    scanf("%d", &pos);
    if (pos <= 1 || pos >= n)
        printf("\nInsertion can not be possible in that possition.\n");
    if (pos > 1 && pos < n)
    {
        InsertDeleteMiddle(num, pos);
        printf("\nInsertion completed successfully.\n");
    }
    printf("\nThe new list are: \n");
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
        printf("Memory can not be alocated.");
    }
    else
    {
        printf("Input data for node 1: ");
        scanf("%d", &num);
        str_node->num = num;
        str_node->next_ptr = NULL;
        temp = str_node;

        for (i = 2; i <= n; i++)
        {
            find_node = (struct node *)malloc(sizeof(struct node));
            if (find_node == NULL)
            {
                printf("Memory can not be allocated.");
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

void InsertDeleteMiddle(int num, int pos)
{
    int i;
    struct node *find_node, *temp;
    
    find_node = (struct node *)malloc(sizeof(struct node));
    if (find_node == NULL)
        printf("Memory can not be allocated.\n");
    else
    {
        find_node->num = num;
        find_node->next_ptr = NULL;
        temp = str_node;
        for (i = 2; i <= pos - 1; i++)
        {
            temp = temp->next_ptr;
            if (temp == NULL)
                break;
        }
        if (temp != NULL)
        {
            find_node->next_ptr = temp->next_ptr;
            temp->next_ptr = find_node;
        }
        else
            printf("Insert is not possible to the given possition.\n");
    }
}

void DisplayList()
{
    struct node *temp;
    if (str_node == NULL)
    {
        printf("List is empty.");
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