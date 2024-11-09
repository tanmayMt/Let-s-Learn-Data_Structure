#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node* prev;
    int info;
    struct node* next;
};
struct node* create_doubly_linked_list(struct node*);
void display_items_of_doubly_linked_list(struct node*);

int main()
{
    struct node* head;
    head=create_doubly_linked_list(head);
    
    display_items_of_doubly_linked_list(head);
    return 0;
}

struct node* create_doubly_linked_list(struct node* start)
{
    struct node* temp;
    struct node* prev;
    char ans;

    temp=(struct node*)malloc(sizeof(struct node));
    temp->prev=NULL;
    start=temp;
    while (1)
    {
        printf("Enter the element:");
        scanf("%d",&temp->info);
        fflush(stdin);

        printf("Continue(Y/N)?:");
        scanf("%c",&ans);

        if(ans=='Y' || ans=='y')
        {
            temp->next=(struct node*)malloc(sizeof(struct node));
            prev=temp;
            temp=temp->next;
            temp->prev=prev;
        }
        else
        {
            temp->next=NULL;
            return start;
        }
    }
}
void display_node_of_doubly_linked_list(struct node* head)
{
    while (head != NULL)
    {
        printf("|%d||%d||%d|  ",head->prev,head->info,head->next);
        head=head->next;
    }
    printf("\n");
}