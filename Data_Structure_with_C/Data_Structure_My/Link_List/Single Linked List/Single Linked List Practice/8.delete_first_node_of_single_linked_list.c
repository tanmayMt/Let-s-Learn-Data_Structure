#include "create_single_linked_list.c"
#include"print_nodes_of_single_linked_list.c"

struct node * delete_frist_node_of_single_linked_list(struct node*);

int main()
{
    struct node * head;
    head=create_single_linked_list(head);
    printf("-Single linked list before delete first node-\n");
    print_nodes_of_single_linked_list(head);

    head=delete_frist_node_of_single_linked_list(head);

    printf("-Single linked list after delete first node-\n");
    print_nodes_of_single_linked_list(head);

    return 0;
}

struct node * delete_frist_node_of_single_linked_list(struct node * head)
{
    struct node *temp;
    temp=head;
    head=head->next;

    free(temp);
    return head;
}