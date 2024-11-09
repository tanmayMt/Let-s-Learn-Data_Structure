#include "create_single_linked_list.c"
#include "print_nodes_of_single_linked_list.c"
struct node * reverse_of_single_linked_list(struct node *);
int main()
{
    struct node * head;

    head=create_single_linked_list(head);
    printf("-Origenal Single linked list-\n");
    print_nodes_of_single_linked_list(head);
    
    head=reverse_of_single_linked_list(head);
    printf("-Single linked list After reverse-\n");
    print_nodes_of_single_linked_list(head);
    return 0;
}
struct node * reverse_of_single_linked_list(struct node * head)
{
    struct node* prev;
    struct node* next;
    next=NULL;
    prev=NULL;
    while (head != NULL)
    {
        next=head->next;
        head->next=prev;
        prev=head;
        head=next;
    }
    head=prev;
    return head;
}