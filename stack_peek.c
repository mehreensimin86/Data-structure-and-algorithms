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
    if (full(ptr))
    {
        printf("the stack is overflowed");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top]=value;
        printf("%d pushed into the stack\n",value);
    }
}

int pop(struct stack*ptr)
{
    if (empty(ptr))
    {
        printf("cant pop ,the stack is empty");
        return -1;
    }
    else
    {

        int value=ptr->arr[ptr->top];
        ptr->top--;
        return value;
    }
}

int peek(struct stack*ptr)
{
    if (empty(ptr))
    {
        printf("cant find peek");
    }
    else
    {
       return ptr->arr[ptr->top];
    }
}
int main()
{
    struct stack*s=malloc(sizeof(struct stack));
    s->size=100;
    s->top=-1;
    s->arr=malloc(s->size*sizeof(int));

    push(s,20);
    push(s,30);
    push(s,40);
    push(s,50);

    printf("%d is peek/top\n",peek(s));
    printf("%d is pop from the stack\n",pop(s));
    printf("%d is pop from the stack\n",pop(s));
    printf("%d is peek/top after pop\n",peek(s));
    if (empty(s))
    {
        printf("the stack is empty");
    }
    else{
        printf("The stack is not empty");
    }
    return 0;

}
