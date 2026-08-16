
#include<stdio.h>
#include<stdlib.h>

struct queue
{
    int size;
    int front ;
    int rear;
    int *arr;
};
int empty(struct queue*q)
{
    return q->front==q->rear;
}
int full(struct queue*q)
{
    return q->rear==q->size-1;
}
void enqueue(struct queue*q,int value)
{
    if (full(q))
    {
        printf("cant enqueue");
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
        printf("cant dequeu");
        return -1;
    }
    else
    {
        return q->arr[++q->front];
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

    printf("%d is deleted from the queue",dequeue(q));
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
