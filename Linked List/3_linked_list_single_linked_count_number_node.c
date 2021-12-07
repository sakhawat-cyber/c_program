/* Write a program in C to create a singly linked list of n nodes and count the number of nodes.
Test Data :
Input the number of nodes : 3
Input data for node 1 : 5
Input data for node 2 : 6
Input data for node 3 : 7
Expected Output :

 Data entered in the list are :                                                                               
 Data = 5                                                                                                     
 Data = 6                                                                                                     
 Data = 7                                                                                                     
                                                                                                              
Total number of nodes = 3  */

#include <stdio.h>
#include <stdlib.h>

struct node
{
    //data to node
    //address of the next node

    int num;
    struct node *next_ptr;
} * str_node;
//function to creat the list
void CreatNodeList(int n);
//function to count to nodes
int CountNode();
//function to display the list
void DisplayList();

int main()
{
    int n, n1;
    printf("Input the number of nodes: ");
    scanf("%d", &n);
    CreatNodeList(n);
    printf("\nData entered in the list are: \n");
    DisplayList();
    n1 = CountNode();
    printf("\nTotal number of nodes = %d\n", n1);
    return 0;
}

void CreatNodeList(int n)
{
    struct node *find_node, *temp;
    int num, i;
    str_node = (struct node *)malloc(sizeof(struct node));
    if (str_node == NULL)
    {
        printf("Memory can not be allocted.");
    }

    else
    {
        /* reads data for node through keyboard */
        printf("Input data for node 1: ");
        scanf("%d", &num);
        str_node->num = num;
        // links the address  field to null
        str_node->next_ptr = NULL;
        temp = str_node;
        //creat n nodes and adds to linked list j
        for (i = 2; i <= n; i++)
        {
            find_node = (struct node *)malloc(sizeof(struct node));
            //check whether the find node is null and if so no memory allocation
            if (find_node == NULL)
            {
                printf("Memory can not be allocated.");
                break;
            }
            else
            {
                printf("Input data for node %d: ", i);
                scanf("%d", &num);
                //links the num field of find node with num
                find_node->num = num;
                //links the address fields of find node with NULL
                find_node->next_ptr = NULL;
                //links previous node i.e.temp to the find node
                temp->next_ptr = find_node;
                temp = temp->next_ptr;
            }
        }
    }
}

int CountNode()
{
    int num = 0;
    struct node *temp;
    temp = str_node;
    while (temp != NULL)
    {
        num++;
        temp = temp->next_ptr;
    }
    return num;
}

void DisplayList()
{
    struct node *temp;
    if (str_node == NULL)
    {
        printf("No date found in the list.");
    }
    else
    {
        temp = str_node;
        while (temp != NULL)
        {
            printf("Date: %d\n", temp->num);
            temp = temp->next_ptr;
        }
    }
}