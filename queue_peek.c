#include<stdio.h>
#include<stdlib.h>
struct queue
{
    int size;
    int front;
    int rear;
    int*arr;
};
int empty(struct queue*q)
{
    return q->rear==q->front;
}
int full(struct queue*q)
{
    return q->rear==q->size-1;
}
void enqueue(struct queue*q,int value)
{
    if(full(q))
    {
        printf("cant add elements");
    }
    else
    {
        q->rear++;
        q->arr[q->rear]=value;
        printf("%d added to the queue\n",value);
    }
}
int dequeue(struct queue*q)
{
    if(empty(q))
    {
        printf("cant delete from the queue");
               return -1;
    }
    else
    {
        return q->arr[++q->front];
    }
}

int peek(struct queue*q)
{
   if (empty(q))
   {
      printf("the queue is empty");
      return -1;
   }
   return q->arr[q->front+1];
}

void display(struct queue*q)
{
    if (empty(q))
   {
      printf("the queue is empty");

   }
   else
   {
       printf("the elements in queue:\n");
       for(int i=q->front+1;i<=q->rear;i++)
       {
           printf("%d,",q->arr[i]);
       }
       printf("\n");
   }
}
int main()
{
     struct queue*q=malloc(sizeof(struct queue));
    q->size=100;
    q->front=-1;
    q->rear=-1;
    q->arr=malloc(q->size*sizeof(int));

    enqueue(q,10);
    enqueue(q,20);
    enqueue(q,30);
    printf("%d is peeked\n",peek(q));
    display(q);

    printf("%d is deleted from the queue\n",dequeue(q));
        printf("%d is after peeked\n",peek(q));
        display(q);

    if (empty(q))
    {
        printf("queue is empty");
    }
    else
    {
        printf("queue is not empty");
    }
    return 0;
}
