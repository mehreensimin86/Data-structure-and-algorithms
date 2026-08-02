#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};
void trvsl(struct node*ptr)
{
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}

struct node* first(struct node*head,int data)
{
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->next=head;
    ptr-> data=data;
    return ptr;

}

int main()
{
    struct node*head;
    struct node*second;
    struct node*third;

    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));

    head->data=7;
    head->next=second;

    second->data=8;
    second->next=third;

    third->data=9;
    third->next=NULL;

    trvsl(head);
    head=first(head,10);
    trvsl(head);
    return 0;
}
