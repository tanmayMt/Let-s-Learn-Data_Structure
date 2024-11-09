#include<stdio.h>
#include "node_for_single_linked_list.c"
#include "create_single_linked_list.c"
#include "print_elements_of_single_linked_list.c"
struct node* insert_at_beginning_of_single_linked_list(struct node*);

struct node* insert_at_beginning_of_single_linked_list(struct node* start)
{
    int n;
    struct node* temp;

    temp=malloc(sizeof(struct node));

    printf("Enter the number which will be inserted at the beging of the linked list:");
    scanf("%d",&n);

    temp->info=n;
    temp->link=start;
    start=temp;
    
    return start;
}

void main()
{
    struct node* head;
    head=NULL;
    head=create_single_linked_list(head);
    printf("Linked List before insert node at begin of linked list:\n");
    print_elements_of_single_linked_list(head);

    head=insert_at_beginning_of_single_linked_list(head);

    printf("Linked List after insert node at begin of linked list:\n");
    print_elements_of_single_linked_list(head);
}