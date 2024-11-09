#include<stdio.h>
#include "create_single_linked_list.c"
#include "print_elements_of_single_linked_list.c"
void delete_first_node_from_linked_list(struct node**);

void main()
{
    struct node* head;
    struct node* ptr;
    head=NULL;
    ptr=NULL;

    head=create_single_linked_list(head);
    print_elements_of_single_linked_list(head);

    delete_first_node_from_linked_list(&head);
    printf("After deleting first node from linked list.\n");
    
    ptr=head;
    while (ptr != NULL)
    {
        printf("%d ",ptr->info);
        ptr=ptr->next;
    }
}

void delete_first_node_from_linked_list(struct node ** start)
{
    struct node* temp;
    if(*start==NULL)
       printf("Linked list is empty!\n");

    temp=*start;
    *start = *start->next;  //Why this is not working?
    free(temp);
    temp=NULL;
}