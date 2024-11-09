#include "create_single_linked_list.c"
#include "print_nodes_of_single_linked_list.c"
struct node * delete_last_node_of_single_linked_list(struct node *);
int main()
{
    struct node * head;
    head=create_single_linked_list(head);
    printf("-Single linked list before delete last node-\n");
    print_nodes_of_single_linked_list(head);

    head=delete_last_node_of_single_linked_list(head);

    printf("-Single linked list before delete last node-\n");
    print_nodes_of_single_linked_list(head);
    return 0;
}

struct node * delete_last_node_of_single_linked_list(struct node * head)
{
    struct node * ptr,* prev;
    ptr=head;
    if (ptr == NULL)
    {
        printf("Linked list is empty!!\n");
        return head;
    }
    else if(head->next == NULL)
    {
        printf("There is only a single node which is deleted.\n");
        free(ptr);
        printf("head=%d\n",head);
        return head;
    }
    while (ptr->next != NULL) //ptr->next == !NULL
    {
        prev=ptr;
        ptr=ptr->next;
    }
    prev->next=NULL;
    free(ptr);
    return head;
}