/* 
Write a program in C to delete the last node of Singly Linked List.
Test Data :
Input the number of nodes : 3
Input data for node 1 : 1
Input data for node 2 : 2
Input data for node 3 : 3
Expected Output :

 Data entered in the list are :                                                                               
 Data = 1                                                                                                     
 Data = 2                                                                                                     
 Data = 3                                                                                                     
                                                                                                              
 The new list after deletion the last node are  :                                                             
 Data = 1                                                                                                     
 Data = 2
*/

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int num;
    struct node *next_ptr;
} * str_node;

void CreatNodeList(int n);
void LastNodeDelete();
void DisplayList();

int main()
{
    int n;
    printf("Input the number of nodes: ");
    scanf("%d", &n);
    CreatNodeList(n);
    printf("\nData entered in the list: \n");
    DisplayList();
    LastNodeDelete();
    printf("\nThe new list after deletetion the last node are: \n");
    DisplayList();
    return 0;
}

void CreatNodeList(int n)
{
    int num, i;
    struct node *find_node, *temp;
    str_node = (struct node *)malloc(sizeof(struct node));
    if (str_node == NULL)
        printf("Memory can not be alocated.");

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
                printf("Memory can not be alocated.");
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

void LastNodeDelete()
{
    struct node *delete_last, *pre_node;
    if (str_node == NULL)
        printf("There is no element in the list.");
    else
    {
        delete_last = str_node;
        pre_node = str_node;
        // Traverse to the last node of the list

        while (delete_last->next_ptr != NULL)
        {
            pre_node = delete_last;
            delete_last = delete_last->next_ptr;
        }
        if (delete_last == str_node)
            str_node = NULL;
        else
            /* disconnect the link of second last node 
        with last node*/

            pre_node->next_ptr = NULL;
        //delete the last node
        free(delete_last);
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