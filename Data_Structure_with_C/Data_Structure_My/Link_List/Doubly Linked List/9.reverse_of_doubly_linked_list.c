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
struct node* reverse_doubly_linked_list(struct node*);

int main()
{
    struct node* head;
    head=create_doubly_linked_list(head);
    display_items_of_doubly_linked_list(head);
    printf("Doubly Linked list is created successfully\n");
    head=reverse_doubly_linked_list(head);
    display_items_of_doubly_linked_list(head);
}
struct node* create_doubly_linked_list(struct node* head)
{
    int n;
    char ans;
    struct node* temp,*prev;

    temp=malloc(sizeof(struct node));
    head=temp;
    prev=NULL;
    
    while (1)
    {
        printf("Enter an number to be inserted:");
        scanf("%d",&n);
        fflush(stdin);

        temp->prev=prev;
        temp->info=n;
        
        printf("Continue(Y/N)?:");
        scanf("%c",&ans);
        if (ans=='Y' || ans=='y')
        {
            temp->next=malloc(sizeof(struct node));
            prev=temp;
            temp=temp->next;
            temp->prev=prev;
        }
        else
        {
            temp->next=NULL;
            temp->prev=prev;
            return head;
        }
    }
}
struct node* reverse_doubly_linked_list(struct node* head)
{
    struct node* ptr,*prev;
    ptr=head;
    prev=NULL;
    while(ptr != NULL)
    {
        ptr->prev=ptr->next;
        ptr->next=prev;
        prev=ptr;
        ptr=ptr->prev;
    }
    return prev;
}
void display_items_of_doubly_linked_list(struct node* head)
{
    while (head != NULL)
    {
        printf("|%d|%d|%d|   ",head->prev,head->info,head->next);
        head=head->next;
    }
    printf("\n");
}
