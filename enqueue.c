#include<stdio.h>
#include<stdlib.h>
struct queue
{
    int size;
    int f;
    int r;
    int*arr;
};
int empty(struct queue*q)
{
   return q->f==q->r;
}
int full(struct queue*q)
{
    return q->r==q->size-1;
}
void enqueue(struct queue*q,int value)
{
    if(full(q))
    {
        printf("cant enque");
    }
    else
    {
        q->r++;
        q->arr[q->r]=value;
        printf("%d is added to the queue\n",value);
    }
}

int main()
{
    struct queue*q=malloc(sizeof(struct queue));
    q->size=100;
    q->f=-1;
    q->r=-1;
    q->arr=malloc(q->size*sizeof(int));

    enqueue(q,10);
    enqueue(q,20);
    enqueue(q,30);
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
