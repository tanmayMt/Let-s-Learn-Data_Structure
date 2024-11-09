#include "node_for_single_linked_list.c"
#include "create_single_linked_list.c"
#include "print_elements_of_single_linked_list.c"
struct node* reverse_of_single_linked_list(struct node*);

int main()
{
    struct node* head;
    head=create_single_linked_list(head);
    printf("Linked List before reverse.\n");
    print_elements_of_single_linked_list(head);

    head=reverse_of_single_linked_list(head);

    printf("Linked list after reverse\n");
    print_elements_of_single_linked_list(head);
    return 0;
}

struct node* reverse_of_single_linked_list(struct node* start)
{
    struct node* prev;
    struct node* next;
    prev=NULL;
    next=NULL;
    while (start!=NULL)
    {
        next=start->link;
        start->link=prev;
        prev=start;
        start=next;
    }
    start=prev;
    return start;
}