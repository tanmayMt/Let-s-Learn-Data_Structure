#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node* linK;
};

struct node* create(struct node*);
int count_of_node(struct node*);

struct node* create(struct node* start)
{
    struct node* temp;
    char answare;

    start=(struct node*)malloc(sizeof(struct node));
    temp=start;

    while (1)
    {
        printf("Enter an integer:");
        scanf("%d",&temp->info);
        fflush(stdin);
        
        printf("Continue(Y/N)?:");
        scanf("%c",&answare);
        if(answare=='Y' || answare=='y')
        {
            temp->linK=(struct node*)malloc(sizeof(struct node));
            temp=temp->linK;
        }
        else
        {
            temp->linK=NULL;
            return start;
        }
    }
}
int count_of_node(struct node* head)
{
    int count;
    struct node* ptr;
    if(head==NULL)
       printf("Linked List is Empty");

    count=0;
    ptr=head;
    while (ptr != NULL)
    {
        count++;
        ptr=ptr->linK;
    }
    return count;
}
int main()
{
    struct node* head;
    int count;
    head=NULL;

    head=create(head);
    count=count_of_node(head);

    printf("Number of Nodes: %d",count);
}