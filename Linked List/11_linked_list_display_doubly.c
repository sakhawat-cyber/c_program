/*
Write a program in C to create and display a doubly linked list.
Test Data :
Input the number of nodes : 3
Input data for node 1 : 2
Input data for node 2 : 5
Input data for node 3 : 8
Expected Output :

 Data entered on the list are :                                                                               
 node 1 : 2                                                                                                   
 node 2 : 5                                                                                                   
 node 3 : 8 
*/

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int num;
    struct node *temp;
    struct node *next_ptr;
} * str_node, *end_node;

void CreatNodeList(int n);
void DisplayList();

int main()
{
    int n;
    printf("Input the number of nodes: ");
    scanf("%d", &n);
    CreatNodeList(n);
    DisplayList();
    return 0;
}

void CreatNodeList(int n)
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

void DisplayList()
{
    struct node *temp;
    int n = 1;
    if (str_node == NULL)
        printf("List of Data.");
    else
    {
        temp = str_node;
        printf("\nData entered in the list: \n");
        while (temp != NULL)
        {
            printf("Node %d = %d\n", n, temp->num);
            n++;
            temp = temp->next_ptr;
        }
    }
}