#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node* prev;
    int info;
    struct node* next;
};
struct node* create_doubly_linked_list(struct node*);
struct node* insert_node_at_beginning_of_double_linked_list(struct node*,int);
void display_node_of_doubly_linked_list(struct node*);
int main()
{
    struct node* head;
    int data;
    head=create_doubly_linked_list(head);

    struct node* ptr;
    ptr=head;
    while (ptr != NULL)
    {
        printf("%d ",ptr->info);
        ptr=ptr->next;
    }
    printf("\n");
    display_node_of_doubly_linked_list(head);
    printf("Enter the item at beginning:");
    scanf("%d",&data);

    head=insert_node_at_beginning_of_double_linked_list(head,data);
    ptr=head;
    printf("After inserting item at start\n");
    while (ptr != NULL)
    {
        printf("%d ",ptr->info);
        ptr=ptr->next;
    }
    printf("\n");
    display_node_of_doubly_linked_list(head);
    return 0;
}

struct node* insert_node_at_beginning_of_double_linked_list(struct node* start,int data)
{
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    // temp->prev=NULL;
    temp->info=data;
    temp->next=start;
    start->prev=temp;
    start=temp;
    return start;
}

struct node* create_doubly_linked_list(struct node* start)
{
    struct node* temp;
    struct node* prev;
    char ans;
    int n;

    temp=(struct node*)malloc(sizeof(struct node));
    start=temp;
    prev=NULL;
    while (1)
    {
        printf("Enter the element:");
        scanf("%d",&n);
        fflush(stdin);

        temp->prev=prev;
        temp->info=n;

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