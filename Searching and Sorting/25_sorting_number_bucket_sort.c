/*
 Write a C program that sort numbers using 
 Bucket sort method. 
From Wikipedia,
Bucket sort, or bin sort, is a sorting 
algorithm that works by distributing the 
elements of an array into a number of 
buckets. Each bucket is then sorted 
individually, either using a different 
sorting algorithm, or by recursively 
applying the bucket sorting algorithm. It 
is a distribution sort, a generalization 
of pigeonhole sort, and is a cousin of 
radix sort in the most-to-least significant 
digit flavor. Bucket sort can be 
implemented with comparisons and therefore 
can also be considered a comparison sort 
algorithm.
*/

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

#define array_size 8
#define bucket_size 5
#define interval 10

struct node
{
    int data;
    struct node *next;
};

void bucketSort(int arr[]);
struct node *insertionsort(struct node *list);
void print(int arr[]);
void printBucket(struct node *list);
int getBucketIndex(int value);

void bucketSort(int arr[])
{
    int i, j;
    struct node **bucket;

    //allocate memory for array of pointer to the buckets
    bucket = (struct node **)malloc(sizeof(struct node *) * bucket_size);
    //initialze pointers to the buckets
    for (i = 0; i < bucket_size; ++i)
        bucket[i] = NULL;

    //put items into buckets
    //creates a link list in each bucket slot
    for (i = 0; i < array_size; ++i)
    {
        struct node *current;
        int pos = getBucketIndex(arr[i]);
        current = (struct node *)malloc(sizeof(struct node));
        current->data = arr[i];
        current->next = bucket[pos];
        bucket[pos] = current;
    }
    //check whats in each buckets
    for (i = 0; i < bucket_size; i++)
    {
        printf("Bucket[\"%d\"]: ", i);
        printBucket(bucket[i]);
        printf("\n");
    }

    //sorting bucket using insertion sort
    for (i = 0; i < bucket_size; ++i)
        bucket[i] = insertionsort(bucket[i]);

    //check whats in each bucket
    printf("---------------------\n");
    printf("Buckets after sorted: \n");
    for (i = 0; i < bucket_size; i++)
    {
        printf("Bucket[\"%d\"]: ", i);
        printBucket(bucket[i]);
        printf("\n");
    }
    //put items beck to original array
    for (j = 0, i = 0; i < bucket_size; ++i)
    {
        struct node *Node;
        Node = bucket[i];
        while (Node)
        {
            //precondition for avoiding out of bounds by the array
            assert(j < array_size);
            arr[j++] = Node->data;
            Node = Node->next;
        }
    }
    //free memory
    for (i = 0; i < bucket_size; ++i)
    {
        struct node *Node;
        Node = bucket[i];
        while (Node)
        {
            struct node *temp;
            temp = Node;
            Node = Node->next;
            free(temp);
        }
    }
    free(bucket);
    return;
}

//insertion sort
struct node *insertionsort(struct node *list)
{
    struct node *num, *node_list;
    //need at least two iteams to sort
    if (list == NULL || list->next == NULL)
        return list;
    node_list = list;
    num = list->next;
    //1st node is new list
    node_list->next = NULL;
    while (num != NULL)
    {
        struct node *ptr;
        //check if insert before first
        if (node_list->data > num->data)
        {
            struct node *temp;
            temp = num;
            //important for the while
            num = num->next;
            temp->next = node_list;
            node_list = temp;
            continue;
        }
        //from begin up to end
        //finds [i] > [i + 1]
        for (ptr = node_list; ptr->next != NULL; ptr = ptr->next)
        {
            if (ptr->next->data > num->data)
                break;
        }
        //if found (above)
        if (ptr->next != NULL)
        {
            struct node *temp;
            temp = num;
            //important for the while
            num = num->next;
            temp->next = ptr->next;
            ptr->next = temp;
            continue;
        }
        else
        {
            ptr->next = num;
            //important for the while
            num = num->next;
            ptr->next->next = NULL;
            continue;
        }
    }
    return node_list;
}

int getBucketIndex(int value)
{
    return value / interval;
}

void print(int arr[])
{
    int i;
    for (i = 0; i < array_size; ++i)
        printf("%d ", arr[i]);
    printf("\n");
}

void printBucket(struct node *list)
{
    struct node *current = list;
    while (current)
    {
        printf("%d ", current->data);
        current = current->next;
    }
}

int main(void)
{
    int arr[array_size] = {19, 15, 0, -3, 23, 7, 11, 23};
    printf("\nOrginal Array: \n");
    print(arr);
    printf("---------------------\n");

    bucketSort(arr);
    printf("----------------------\n");
    printf("Sorted Array: \n");
    print(arr);
    printf("\n\n");
    return 0;
}