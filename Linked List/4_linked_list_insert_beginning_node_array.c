/* Write a program in C to insert a new node at the beginning of a Singly Linked List.
Test Data and Expected Output :

 Input the number of nodes : 3                                                                                
 Input data for node 1 : 5                                                                                    
 Input data for node 2 : 6                                                                                    
 Input data for node 3 : 7                                                                                    
                                                                                                              
 Data entered in the list are :                                                                               
 Data = 5                                                                                                     
 Data = 6                                                                                                     
 Data = 7                                                                                                     
                                                                                                              
 Input data to insert at the beginning of the list : 4                                                        
                                                                                                              
 Data after inserted in the list are :                                                                        
 Data = 4                                                                                                     
 Data = 5                                                                                                     
 Data = 6                                                                                                     
 Data = 7 */

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int num;
    struct node *next_ptr;
} * str_node;

void CreatNodeList(int n);
void InsertBeginning(int num);
void DisplayList();

int main()
{
    int num;
    printf("Input the number of nodes: ");
    scanf("%d", &num);
    CreatNodeList(num);
    printf("\nData entered in the list are: \n");
    DisplayList();
    printf("\nInput data to insert at the beginning of the: ");
    scanf("%d", &num);
    InsertBeginning(num);
    printf("\nData after inserted in the list are: \n");
    DisplayList();
    return 0;
}

void CreatNodeList(int n)
{
    struct node *find_node, *temp;
    int num, i;

    str_node = (struct node *)malloc(sizeof(struct node));
    if (str_node == NULL)
    {
        printf("Memory can not be allocated.");
    }
    else
    {
        printf("Input data for node 1: ");
        scanf("%d", &num);
        str_node->num = num;
        str_node->next_ptr = NULL;
        temp = str_node;
        //Creats n nodes and add to linked list
        for (i = 2; i <= n; i++)
        {
            find_node = (struct node *)malloc(sizeof(struct node));
            //check whether is the find node is null and if so no memory alloction
            if (find_node == NULL)
            {
                printf("Memory cannot be allocated.");
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

void InsertBeginning(int num)
{
    struct node *find_node;

    find_node = (struct node *)malloc(sizeof(struct node));
    if (find_node == NULL)
        printf("Memory can not be allocated.");
    else
    {
        find_node->num = num;
        find_node->next_ptr = str_node;
        str_node = find_node;
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