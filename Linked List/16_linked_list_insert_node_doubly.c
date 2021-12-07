/* 
Write a program in C to insert a new node at the middle in a doubly linked list.
Test Data and Expected Output :

  Doubly Linked List : Insert new node at the middle in a doubly linked list :                                 
----------------------------------------------------------------------------------                            
 Input the number of nodes (3 or more ): 3                                                                    
 Input data for node 1 : 2                                                                                    
 Input data for node 2 : 4                                                                                    
 Input data for node 3 : 5                                                                                    
                                                                                                              
 Data entered in the list are :                                                                               
 node 1 : 2                                                                                                   
 node 2 : 4                                                                                                   
 node 3 : 5                                                                                                   
 Input the position ( 2 to 2 ) to insert a new node : 2                                                       
 Input data for the position 2 : 3                                                                            
                                                                                                              
 After insertion the new list are :                                                                           
 node 1 : 2                                                                                                   
 node 2 : 3                                                                                                   
 node 3 : 4                                                                                                   
 node 4 : 5
*/

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int num;
    struct node *temp;
    struct node *next_ptr;
} * str_node, *end_node;

void CreateNodeList(int n);
void InsertNodeMiddle(int num, int pos);
void DisplayList(int a);

int main()
{
    int n, a, insert_place, num;
    str_node = NULL;
    end_node = NULL;

    printf("Input the number of nodes (3 or more): ");
    scanf("%d", &n);
    CreateNodeList(n);
    a = 1;
    DisplayList(a);
    printf("\nInput the possition (2 to %d) to insert a new node: ", n - 1);
    scanf("%d", &insert_place);

    if (insert_place < 1 || insert_place > n)
        printf("\nInvalid position. Try again.\n");
    if (insert_place >= 1 && insert_place <= n)
    {
        printf("Input data for the possition %d: ", insert_place);
        scanf("%d", &num);
        InsertNodeMiddle(num, insert_place);
        a = 2;
        DisplayList(a);
    }
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
            end_node = str_node;
            for (i = 2; i <= n; i++)
            {
                find_node = (struct node *)malloc(sizeof(struct node));
                if (find_node != NULL)

                {
                    printf("Input data for node %d: ", i);
                    scanf("%d", &num);
                    find_node->num = num;
                    find_node->temp = end_node;
                    find_node->next_ptr = NULL;
                    end_node->next_ptr = find_node;
                    end_node = find_node;
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

void InsertNodeMiddle(int num, int pos)
{
    struct node *new_node, *tmp;
    int i;

    if (end_node == NULL)
        printf("No data in the list!\n");
    else
    {
        tmp = str_node;
        i = 1;
        while (i < pos - 1 && tmp != NULL)
        {
            tmp = tmp->next_ptr;
            i++;
        }
        if (tmp != NULL)
        {
            new_node = (struct node *)malloc(sizeof(struct node));
            new_node->num = num;
            /*next address of new node is linking with 
            the next address of temp node*/
            new_node->next_ptr = tmp->next_ptr;
            /* previous address of new node is linking with
            the temp node*/
            new_node->temp = tmp;
            if (tmp->next_ptr != NULL)
                tmp->next_ptr->temp = new_node;
            tmp->next_ptr = new_node;
        }
        else
        {
            printf("The possition you entered, is invalid.\n");
        }
    }
}

void DisplayList(int m)
{
    struct node *temp;
    int n = 1;

    if (str_node == NULL)
        printf("List is empty data.");
    else
    {
        temp = str_node;
        if (m == 1)
            printf("\nData entered in the list: \n");
        else
            printf("\nAfter deletion the new list are: \n");
        while (temp != NULL)
        {
            printf("Node %d = %d\n", n, temp->num);
            n++;
            temp = temp->next_ptr;
        }
    }
}