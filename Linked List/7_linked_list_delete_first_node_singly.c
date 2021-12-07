/* 
Write a program in C to delete first node of Singly Linked List.
Test Data :
Input the number of nodes : 3
Input data for node 1 : 2
Input data for node 2 : 3
Input data for node 3 : 4
Expected Output :

 Data entered in the list are :                                                                               
 Data = 2                                                                                                     
 Data = 3                                                                                                     
 Data = 4                                                                                                     
                                                                                                              
 Data of node 1 which is being deleted is :  2                                                                
                                                                                                              
 Data, after deletion of first node :                                                                         
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
void FirstNodeDelete();
void DisplayList();

int main()
{
    int num;
    printf("Input the number of nodes: ");
    scanf("%d", &num);
    CreatNodeList(num);
    printf("\nData entered in the list: \n");
    DisplayList();
    FirstNodeDelete();
    printf("\nData, after deletion of first node: \n");
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

void FirstNodeDelete()
{
    struct node *delete_ptr;

    if (str_node == NULL)
        printf("There are no node in the list.");
    else
    {
        delete_ptr = str_node;
        str_node = str_node->next_ptr;
        printf("\nData of node 1 which is beging delete is: %d\n", delete_ptr->num);
        //clears the memory occupied by first node
        free(delete_ptr);
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