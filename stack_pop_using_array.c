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
    if(ptr->top==-1)
    {
        return 1;
    }
    else
        {return 0;}

}

int full(struct stack*ptr)
{
    if(ptr->top==ptr->size-1)
    {
        return 1;
    }
    else{return 0;}
}

void push (struct stack*ptr,int value)
{
    if(full(ptr))
    {
        printf("stack is overflowed");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top]=value;
        printf("%d pused into the stack\n",value);
    }
}

int pop (struct stack*ptr)
{
    if (empty(ptr))
    {
        printf("cant pop");
        return -1;
    }
    else
    {
        ptr->top--;
        int value=ptr->arr[ptr->top];

    }
}
int main()
{
    struct stack *s = malloc(sizeof(struct stack));
    s->size=80;
    s->top=-1;
    s->arr=malloc(s->size*sizeof(int));
    push(s,20);
    push(s,30);
    push(s,40);

    printf("%d pop from the stack\n",pop(s));
    printf("%d pop from the stack\n",pop(s));
   if (empty(s))
   {
       printf("the stack is empty");
   }
   else{
    printf ("the stack is not empty");
   }
   return 0;
}
