#include "create_single_linked_list.c"
#include "print_nodes_of_single_linked_list.c"
struct node * delete_hole_linked_list(struct node *);

int main()
{
    struct node * head;
    head=create_single_linked_list(head);
    printf("Single linked list:\n");
    print_nodes_of_single_linked_list(head);

    head=delete_hole_linked_list(head);

    print_nodes_of_single_linked_list(head);
    return 0;
}

struct node * delete_hole_linked_list(struct node * head)
{
    struct node * ptr;
    ptr=head;
    while (head!=NULL)
    {
        ptr=ptr->next;
        free(head);
        head=ptr;
    }
    
}