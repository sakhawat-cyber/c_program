/* 
Write a program in C to create and display a circular linked list.
Test Data :
Input the number of nodes : 3
Input data for node 1 : 2
Input data for node 2 : 5
Input data for node 3 : 8
Expected Output :

 Data entered in the list are :                                                                               
 Data 1 = 2                                                                                                   
 Data 2 = 5                                                                                                   
 Data 3 = 8
*/

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int num;
    struct node *next_node;
} * str_node;

void CreateNodeList(int n);
void DisplayList();

int main()
{
    int n;
    str_node = NULL;
    printf("Input the numbers of nodes: ");
    scanf("%d", &n);
    CreateNodeList(n);

    DisplayList();
    return 0;
}

void CreateNodeList(int n)
{
    int num, i;
    struct node *find_node, *temp;

    if (n >= 1)
    {
        str_node = (struct node *)malloc(sizeof(struct node));
        printf("Input data for node 1: ");
        scanf("%d", &num);
        str_node->num = num;
        str_node->next_node = NULL;
        temp = str_node;
        for (i = 2; i <= n; i++)
        {
            find_node = (struct node *)malloc(sizeof(struct node));
            printf("Input data for node %d: ", i);
            scanf("%d", &num);
            find_node->num = num;
            find_node->next_node = NULL;
            temp->next_node = find_node;
            temp = find_node;
        }
        temp->next_node = str_node;
    }
}

void DisplayList()
{
    struct node *temp;
    int n = 1;
    if (str_node == NULL)
        printf("List of data empty.");
    else
    {
        temp = str_node;
        printf("\nData entered in the list: \n");
        do
        {
            printf("Data %d = %d\n", n, temp->num);
            temp = temp->next_node;
            n++;
        } while (temp != str_node);
    }
}