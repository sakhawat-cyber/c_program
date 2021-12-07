#include <stdio.h>
#include <stdlib.h>
#define max 50
//void insert();
//void display();
int queue_array[max];
int rear = -1;
int front = -1;

void insert()
{
   int item;
   if (rear == max - 1)
      printf("Queue Overflow n");
   else
   {
      if (front == -1)
         front = 0;
      printf("Insert the element in queue: ");
      scanf("%d", &item);
      rear = rear + 1;
      queue_array[rear] = item;
   }
}

int main()
{
   int i;
   if(front == -1)
      printf("Queue is empty n");
   else
   {
      printf("Queue is: n");
      for(i = front; i <= rear; i++)
      {
         printf("%d ", queue_array[i]);
         printf("\n");
      }      
   }
}
