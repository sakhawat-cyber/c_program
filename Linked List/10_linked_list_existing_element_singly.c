/* 
Write a program in C to search an existing element in a singly linked list.
Test Data and Expected Output :

Input the number of nodes : 3                                                                                
                                                                                                              
 Input data for node 1 : 2                                                                                    
 Input data for node 2 : 5                                                                                    
 Input data for node 3 : 8                                                                                    
                                                                                                              
 Data entered in the list are :                                                                               
 Data = 2                                                                                                     
 Data = 5                                                                                                     
 Data = 8                                                                                                     
                                                                                                              
 Input the element to be searched : 5                                                                         
 Element found at node 2 
*/

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int num;
    struct node *next_ptr;
} str_node, *end_node;

int FindElement(int);

void main()
{
    int n, i, find_element, find_place;
    str_node.next_ptr = NULL;
    end_node = &str_node;

    printf("Input the number of nodes: ");
    scanf("%d", &n);
    printf("\n");
    for (i = 0; i < n; i++)
    {
        end_node->next_ptr = (struct node *)malloc(sizeof(struct node));
        printf("Input data for node %d: ", i + 1);
        scanf("%d", &end_node->num);
        end_node = end_node->next_ptr;
    }
    end_node->next_ptr = NULL;
    printf("\nData entered in the list: \n");
    end_node = &str_node;
    while (end_node->next_ptr != NULL)
    {
        printf("Data = %d\n", end_node->num);
        end_node = end_node->next_ptr;
    }
    printf("\n");
    printf("Input the element to be searched:  ");
    scanf("%d", &find_element);
    find_place = FindElement(find_element);
    if (find_place <= n)
        printf("Element found at node %d \n\n", find_place);
    else
        printf("This element does not exists in linked list.\n");
}

int FindElement(int find_element)
{
    int num = 1;
    end_node = &str_node;

    while (end_node->next_ptr != NULL)
    {
        if (end_node->num == find_element)
            break;
        else
            num++;
        end_node = end_node->next_ptr;
    }
    return num;
}