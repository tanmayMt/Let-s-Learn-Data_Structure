#include "create_single_linked_list.c"
#include "print_nodes_of_single_linked_list.c"
struct node * delete_particular_node_of_single_linked_list(struct node *,int);
int main()
{
    struct node * head;
    int pos;
    head=create_single_linked_list(head);
    printf("-Single linked list before delete last node-\n");
    print_nodes_of_single_linked_list(head);
    
    printf("Enter the position of the node to be deleted:");
    scanf("%d",&pos);
    head=delete_particular_node_of_single_linked_list(head,pos);

    printf("-Single linked list after delete last node-\n");
    print_nodes_of_single_linked_list(head);
    return 0;
}
struct node * delete_particular_node_of_single_linked_list(struct node * head,int pos)
{
    struct node * ptr;
    struct node * prev;
    ptr=head;
    prev=NULL;
    if (pos==1)
    {
        head=ptr->next;
        return head;
    }
    
    pos=pos-1;
    while (pos!=0)
    {
        prev=ptr;
        ptr=ptr->next;
        pos--;
    }
    
    prev->next=ptr->next;
    free(ptr);
    return head;
}