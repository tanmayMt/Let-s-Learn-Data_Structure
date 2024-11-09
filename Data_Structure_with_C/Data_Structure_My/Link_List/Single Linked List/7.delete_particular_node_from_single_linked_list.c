#include "node_for_single_linked_list.c"
#include "create_single_linked_list.c"
#include "print_elements_of_single_linked_list.c"
struct node* delete_particular_node_from_single_linked_list(struct node*);

void main()
{
    struct node* head;
    head=create_single_linked_list(head);
    printf("\nLinked list before delete node:\n");
    print_elements_of_single_linked_list(head);

    head=delete_particular_node_from_single_linked_list(head);

    printf("Linked list after deleting particular node\n");
    print_elements_of_single_linked_list(head);
}

struct node* delete_particular_node_from_single_linked_list(struct node* head)
{
    if(head == NULL)
       printf("Linked List is Empty!!");

    else
    {
        int pos;
        printf("Enter position of the node which will be deleted:");
        scanf("%d",&pos);
        


        struct node* ptr;
        struct node* temp;
        ptr=head;

        if(pos==1)
        {
            ptr=ptr->link;
            free(head);
            head=ptr;
            return head;
        }

        for (size_t i = 0; i < (pos-1); i++)
        {
            temp=ptr;
            ptr=ptr->link;
        }
        temp->link=ptr->link;
        free(ptr);
        temp=NULL;
        return head;
    }
}
