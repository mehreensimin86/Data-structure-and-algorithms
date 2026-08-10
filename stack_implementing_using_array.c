#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
int empty(struct stack*ptr)
{
    if(ptr->top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int full(struct stack *ptr)
{
    if (ptr->top==ptr->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    struct stack *s;
    s->size=80;
    s->top=-1;
    s->arr=(int*)malloc(s->size*sizeof(int));

    if (empty(s))
    {
        printf("the stack is empty");
    }
    else
    {
        printf("the stack is full");
    }
    return 0;
}
