#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int size;
    int top;
    int*arr;

};
int empty(struct stack*ptr)
{
    return ptr->top==-1;
}
int full(struct stack*ptr)
{
    return ptr->top==ptr->size-1;
}
void push(struct stack*ptr,int value)
{
    if(full(ptr))
    {
        printf("cant push");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top]=value;
        printf("%d is pushed into the stack\n",value);
    }

}

int pop(struct stack*ptr)
{
    if(empty(ptr))
    {
        printf("cant pop");
        return -1;
    }
    else
    {
        int value=ptr->arr[ptr->top];
        ptr->top--;
        return value;
    }
}
void display(struct stack *ptr)
{
    if (empty(ptr))
    {
        printf("the stack is empty");
    }
    else
    {
        printf("elements from bottom to top:\n");
        for (int i=0;i<=ptr->top;i++)
        {
            printf("%d\n",ptr->arr[i]);
        }
        printf("\n");
    }
}

int main()
{
    struct stack*s=malloc(sizeof(struct stack));
    s->size=100;
    s->top=-1;
    s->arr=malloc(s->size*sizeof(int));

    push(s,10);
    push(s,20);
    push(s,30);
    push(s,40);
    printf ("%d is pop from the stack\n",pop(s));
    display(s);
    return 0;
}
