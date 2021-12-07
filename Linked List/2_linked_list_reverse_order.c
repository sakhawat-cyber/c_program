/* Write a program in C to create a singly linked list of n nodes and display it in reverse order.
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
                                                                                                              
 The list in reverse are :                                                                                    
 Data = 7                                                                                                     
 Data = 6                                                                                                     
 Data = 5  */

#include <stdio.h>
#include <stdlib.h>
struct node
{
    //date to node
    //address of the next node

    int num;
    struct node *next_ptr;
} * str_node;

//function to creat the list
void CreatNodeList(int n);
//function to convert the list in reverse
void ReverseDisplayList();
//function to display the list
void DisplayList();

int main()
{
    int n;
    printf("Input the number of nodes: ");
    scanf("%d", &n);

    CreatNodeList(n);
    printf("\nData entered in the list are: \n");
    DisplayList();
    ReverseDisplayList();

    printf("\nThe list in reverse are: \n");
    DisplayList();
    return 0;
}

void CreatNodeList(int n)
{
    struct node *temp, *find_node;
    int num, i;
    str_node = (struct node *)malloc(sizeof(struct node));
    /* check wether the find node i null and if so no memory
     alloction */
    if (str_node == NULL)
        printf("Memory can not be allocted.");

    else
    {
        //reads data for the node throught keyboard
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
                //links the num filed of find_node with num
                find_node->num = num;
                //links the address filed of find_node NULL
                find_node->next_ptr = NULL;
                //links previous node i.e. temp to the find_node
                temp->next_ptr = find_node;
                temp = temp = temp->next_ptr;
            }
        }
    }
}

void ReverseDisplayList()
{
    struct node *pre_node, *cur_node;
    if (str_node != NULL)
    {
        pre_node = str_node;
        cur_node = str_node->next_ptr;
        str_node = str_node->next_ptr;

        //convert the first node as list
        pre_node->next_ptr = NULL;

        while (str_node != NULL)
        {
            str_node = str_node->next_ptr;
            cur_node->next_ptr = pre_node;

            pre_node = cur_node;
            cur_node = str_node;
        }
        //convert the lsat node as head
        str_node = pre_node;
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
            //prints the data of current node
            printf("Data = %d\n", temp->num);
            //advnces the position of curraent node
            temp = temp->next_ptr;
        }
    }
}