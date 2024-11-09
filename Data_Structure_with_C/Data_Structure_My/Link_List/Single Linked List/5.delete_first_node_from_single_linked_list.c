#include "node_for_single_linked_list.c"
#include "create_single_linked_list.c"
#include "print_elements_of_single_linked_list.c"
struct node* delete_first_node_from_single_linked_list(struct node* );

void main()
{
    struct node* head;
    head=create_single_linked_list(head);
    print_elements_of_single_linked_list(head);

    printf("After deleting the last node from linked list:\n");
    
    head=delete_first_node_from_single_linked_list(head);
    print_elements_of_single_linked_list(head);
}

struct node* delete_first_node_from_single_linked_list(struct node* start)
{
    if(start==NULL)
       printf("Linked list is empty!");

    struct node* temp;

    temp=start;
    start=start->link;
    free(temp);
    temp=NULL;
    return start;
}