#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node* link;
};
struct node* create(struct node *);
int count(struct node*);

int main()
{
    struct node *head;
    int count;

    head=NULL;
    head=create(head);

    count=count_of_node(head);
    printf("\nNumber of elements in liked list: %d\n",count);
}

struct node* create(struct node *start)
{
    struct node* temp;
    char answar;

    start=(struct node *)malloc(sizeof(struct node));
    temp=start;

    while (1)
    {
        printf("Enter an integer:");
        scanf("%d",&temp->info);
        fflush(stdin);

        printf("Continue?(Y/N):");
        scanf("%c",&answar);

        if(answar=='Y' || answar=='y')
        {
            temp->link=(struct node*)malloc(sizeof(struct node));
            temp=temp->link;    //temp->link->link
        }
        else
        {
            temp->link=NULL;
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
        printf("%d ",ptr->info);
        count++;
        ptr=ptr->link;
    }
    return count;
}