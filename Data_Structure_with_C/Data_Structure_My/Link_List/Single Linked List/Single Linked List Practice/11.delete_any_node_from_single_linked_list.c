#include "create_single_linked_list.c"
#include "print_nodes_of_single_linked_list.c"
struct node * delete_any_node_from_single_linked_list(struct node *,int);
int main()
{
    struct node * head;
    int pos;
    head=create_single_linked_list(head);
    printf("-Single linked list before delete last node-\n");
    print_nodes_of_single_linked_list(head);
    
    printf("Enter the number of the node to be deleted:");
    scanf("%d",&pos);
    
    head=delete_any_node_from_single_linked_list(head,pos);

    return 0;
}
struct node * delete_any_node_from_single_linked_list(struct node * head,int key)
{
    struct node * ptr, * prev;
    ptr=head;
    prev=NULL;
    while (ptr != NULL)
    {
        if(ptr->info == key)
        {
            if (ptr==head)
                head=ptr->next;
            else
                prev->next=ptr->next;
            free(ptr);
            return head;
        }
        else
        {
            prev=ptr;
            ptr=ptr->next;
        }
    }
    printf("%d is not found.\n",key);
    return head;
}