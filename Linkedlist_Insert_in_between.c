#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};
void traversal(struct node*ptr)
{
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}



    struct node*index(struct node*head,int data,int index)
    {
        struct node*ptr=(struct node*)malloc(sizeof(struct node));
        struct node *p=head;
        int i=0;
        while (i!=index-1)
        {
            p=p->next;
            i++;
        }
        ptr->data=data;
        ptr->next=p->next;
        p->next=ptr;
        return head;
    }

    int main()
    {
        struct node*head;
        struct node*second;
        struct node*third;
        struct node*fourth;
        head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));

    head->data=7;
    head->next=second;

    second->data=11;
    second->next=third;

    third->data=41;
    third->next=fourth;

    fourth->data=66;
    fourth->next=NULL;

    traversal(head);
    head=index(head,56,2);
    traversal(head);
    return 0;
    }

