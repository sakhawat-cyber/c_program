/*
Write a program in C to search an element in a circular linked list.
Test Data and Expected Output :

 Circular Linked List : Search an element in a circular linked list :                                         
-------------------------------------------------------------------------                                     
 Input the number of nodes : 3                                                                                
 Input data for node 1 : 2                                                                                    
 Input data for node 2 : 5                                                                                    
 Input data for node 3 : 9                                                                                    
                                                                                                              
 Data entered in the list are :                                                                               
 Data 1 = 2                                                                                                   
 Data 2 = 5                                                                                                   
 Data 3 = 9                                                                                                   
 Input the element you want to find : 5                                                                       
 Element found at node 2
*/

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int num;
    struct node *next_node;
} * str_node, *end_node;

void CreateNodeList(int n);
int FindElement(int find_ele, int n);
void DisplayList();

int main()
{
    int n, m, find_ele, find_place;
    str_node = NULL;
    end_node = NULL;

    printf("Input the number of node: ");
    scanf("%d", &n);
    m = n;
    CreateNodeList(n);
    DisplayList();
    printf("Input the element you want to find: ");
    scanf("%d", &find_ele);

    find_place = FindElement(find_ele, m);
    if(find_place < n)
        printf("Element found at node %d \n\n", find_place);
    else
        printf("This element does not exists in linked list.\n\n");
    return 0;
}

void CreateNodeList(int n)
{
    int num, i;
    struct node *find_node, *temp;

    str_node = (struct node *)malloc(sizeof(struct node));
    if (n >= 1)
    {
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

int FindElement(int find_ele, int n)
{
    int num1 = 1;
    end_node = str_node;

    while(end_node -> next_node != NULL)
    {
        if(end_node -> num == find_ele)
            break;
        else
            num1++;
            end_node = end_node -> next_node;
        if(num1 == n + 1);
        break;
    }
    return num1;
}

void DisplayList()
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
        printf("\nData entered in the node.\n");
        do
        {
            printf("Data %d = %d\n", n, temp->num);
            temp = temp->next_node;
            n++;
        }while (temp != str_node);
    }
}
