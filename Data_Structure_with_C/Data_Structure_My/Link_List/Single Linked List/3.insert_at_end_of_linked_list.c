#include<stdio.h>
#include "node_for_single_linked_list.c"
#include "create_single_linked_list.c"
#include "print_elements_of_single_linked_list.c"
struct node* insert_at_end_of_linked_list(struct node* );


int main()
{
    struct node* head;
    head=create_single_linked_list(head);
    print_elements_of_single_linked_list(head);
    
    head=insert_at_end_of_linked_list(head);
    print_elements_of_single_linked_list(head);
}

struct node* insert_at_end_of_linked_list(struct node* start)
{
    struct node* temp;
    struct node* ptr;
    int n;

    printf("\nEnter the number for last node:");
    scanf("%d",&n);

    temp=malloc(sizeof(struct node));
    temp->info=n;
    temp->link=NULL;

    ptr=start;
    while (ptr->link != NULL)
        ptr=ptr->link;
    ptr->link=temp;
    return start;
}