/* Write a program in C to create and display Singly Linked List.
Test Data :
Input the number of nodes : 3
Input data for node 1 : 5
Input data for node 2 : 6
Input data for node 3 : 7
Expected Output :

 Data entered in the list :                                                                                   
 Data = 5                                                                                                     
 Data = 6                                                                                                     
 Data = 7  */

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

//function to display the list
void DisplayList();

int main()
{
    int n;
    printf("input the number of nodes: ");
    scanf("%d", &n);
    CreatNodeList(n);
    printf("\nData entered in the list: \n");
    DisplayList();
    return 0;
}

void CreatNodeList(int n)
{
    struct node *temp, *find_node;
    int num, i;

    str_node = (struct node *)malloc(sizeof(struct node));
    /*check whether the find node i null
     and if so no memory allocation */
    if (str_node == NULL)
        printf("Memory can not be alocated.");

    else
    {
        //reads data for the node through keyboard
        printf("Input data for node 1: ");
        scanf("%d", &num);
        str_node->num = num;
        //links the address filed to null
        str_node->next_ptr = NULL;
        temp = str_node;
        //creating n nodes and adding to linked list
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
                //links the num field of find_node with num
                find_node->num = num;
                // links the address field of find_node with NUll
                find_node->next_ptr = NULL;
                //links previous nodes i.e. temp to the find node
                temp->next_ptr = find_node;
                temp = temp->next_ptr;
            }
        }
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