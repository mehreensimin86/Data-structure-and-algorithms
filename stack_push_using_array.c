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
int main()
{
    struct stack *s = malloc(sizeof(struct stack));
    s->size=80;
    s->top=-1;
    s->arr=malloc(s->size*sizeof(int));
    push(s,20);
    push(s,30);
    push(s,40);
   if (empty(s))
   {
       printf("the stack is empty");
   }
   else{
    printf ("the stack is not empty");
   }
   return 0;
}
