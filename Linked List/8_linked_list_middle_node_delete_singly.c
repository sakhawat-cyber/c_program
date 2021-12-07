/*
Write a program in C to delete a node from the middle of Singly Linked List.
Test Data and Expected Output :

Input the number of nodes : 3                                                                                
 Input data for node 1 : 2                                                                                    
 Input data for node 2 : 5                                                                                    
 Input data for node 3 : 8                                                                                    
                                                                                                              
 Data entered in the list are :                                                                               
 Data = 2                                                                                                     
 Data = 5                                                                                                     
 Data = 8                                                                                                     
                                                                                                              
 Input the position of node to delete : 2                                                                     
                                                                                                              
 Deletion completed successfully.                                                                             
                                                                                                              
 The new list are  :                                                                                          
 Data = 2                                                                                                     
 Data = 8  
*/

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int num;
    struct node *next_ptr;
} * str_node;

void CreatNodeList(int n);
void MiddleNodeDeletetion(int pos);
void DisplayList();

int main()
{
    int num, pos;

    printf("Input the number of nodes: ");
    scanf("%d", &num);
    CreatNodeList(num);
    printf("\nData entered in the list: \n");
    DisplayList();
    printf("Input the possition of node to delete: ");
    scanf("%d", &pos);

    if (pos <= 1 || pos >= num)
        printf("Deletion can not be possible from that possition.\n");
    if (pos > 1 && pos < num)
    {
        printf("Deletion completed successfully\\n");
        MiddleNodeDeletetion(pos);
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
                printf("memory can not be alocated.");
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

void MiddleNodeDeletetion(int pos)
{
    struct node *delete_mid, *pre_node;
    int i;

    if (str_node == NULL)
        printf("There are no nodes in the last.");
    else
    {
        delete_mid = str_node;
        pre_node = str_node;
        for (i = 2; i <= pos; i++)
        {
            pre_node = delete_mid;
            delete_mid = delete_mid->next_ptr;
            if (delete_mid == NULL)
                break;
        }
        if (delete_mid != NULL)
        {
            if (delete_mid == str_node)
                str_node = str_node->next_ptr;
            pre_node->next_ptr = delete_mid->next_ptr;
            delete_mid->next_ptr = NULL;
            free(delete_mid);
        }
        else
            printf("Deletion can not be possible from that possition.\n");
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