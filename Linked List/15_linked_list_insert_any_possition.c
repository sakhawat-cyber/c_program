/* 
Write a program in C to insert a new node at any position in a doubly linked list.
Test Data and Expected Output :

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
void InsertNodeBeginning(int num);
void InsertNodeEnd(int num1);
void AnyInsertNode(int num2, int pos);
void DisplayList(int a);

int main()
{
    int n, a, insert_place, num3;
    str_node = NULL;
    end_node = NULL;

    printf("Input the number of nodes (3 or more): ");
    scanf("%d", &n);
    CreateNodeList(n);
    a = 1;
    DisplayList(a);

    printf("Input the possition (1 to %d) to insert a new node: ", n + 1);
    scanf("%d", &insert_place);
    printf("Input data for the possition %d: ", insert_place);
    scanf("%d", &num3);
    AnyInsertNode(num3, insert_place);
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

void AnyInsertNode(int num, int pos)
{
    int i;
    struct node *new_node, *temp1;

    if (end_node == NULL)
        printf("No data found in the list!\n");
    else
    {
        temp1 = str_node;
        i = 1;
        while (i < pos - 1 && temp1 != NULL)
        {
            temp1 = temp1->next_ptr;
            i++;
        }
        if (pos == 1)
            InsertNodeBeginning(num);
        else if (temp1 == end_node)
            InsertNodeEnd(num);
        else if (temp1 != NULL)
        {
            new_node = (struct node *)malloc(sizeof(struct node));
            new_node->num = num;
            new_node->next_ptr = temp1->next_ptr;
            new_node->temp = temp1;
            if (temp1->next_ptr != NULL)
                temp1->next_ptr->temp = new_node;
            temp1->next_ptr = new_node;
        }
        else
            printf("The possition you entered, is invalid.\n");
    }
}

void InsertNodeBeginning(int num)
{
    if (str_node == NULL)
        printf("No data found in the list!\n");
    else
    {
        struct node *new_node;

        new_node = (struct node *)malloc(sizeof(struct node));
        new_node->num = num;

        //next address of new node is linking with starting node
        new_node->next_ptr = str_node;

        //set previous address field of new node is NULL
        new_node->temp = NULL;

        //previous address of starting node is linking with new node
        str_node->temp = new_node;

        //set the new node as starting node
        str_node = new_node;
    }
}

void InsertNodeEnd(int num)
{
    struct node *new_node;

    if (end_node == NULL)
        printf("No data found in the list!\n");
    else
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node->num = num;
        new_node->next_ptr = NULL;
        new_node->temp = end_node;
        end_node->next_ptr = new_node;
        end_node = new_node;
    }
}

void DisplayList(int m)
{
    struct node *temp;
    int n = 1;
    if (str_node == NULL)
    {
        printf("List of data empty.");
    }

    else
    {
        temp = str_node;
        if (m == 1)
            printf("\nData entered in the list: \n");
        else
            printf("\nAfter insertion the new list are: \n");

        while (temp != NULL)
        {
            printf("Node %d = %d\n", n, temp->num);
            n++;
            temp = temp->next_ptr;
        }
    }
}