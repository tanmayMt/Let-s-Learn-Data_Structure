#include "node_for_single_linked_list.c"
#include "create_single_linked_list.c"
#include "print_elements_of_single_linked_list.c"
struct node* delete_last_node_from_single_linked_list(struct node*);

void main()
{
    struct node* head;
    head=create_single_linked_list(head);
    printf("\nLinked list before delete node:\n");
    print_elements_of_single_linked_list(head);

    head=delete_last_node_from_single_linked_list(head);

    printf("Linked list after delete last node\n");
    print_elements_of_single_linked_list(head);
}

struct node* delete_last_node_from_single_linked_list(struct node* start)
{
    if(start == NULL)
       printf("Linked List is Empty!!");
    
    else
    {
        struct node* ptr;
        struct node* temp;
        ptr=start;
        while (ptr->link!=NULL)
        {
            temp=ptr;
            ptr=ptr->link;

        }
        temp->link=NULL;
        free(ptr);
        temp=NULL;
        return start;
    }
}
