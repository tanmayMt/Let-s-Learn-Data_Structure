struct node* delete_particular_node_from_single_linked_list(struct node*);

struct node* delete_particular_node_from_single_linked_list(struct node* start)
{
    if(start == NULL)
       printf("Linked List is Empty!!");

    else
    {
        int pos;
        printf("Enter position of the node which will be deleted:");
        scanf("%d",&pos);

        struct node* ptr;
        struct node* temp;

        ptr=start;
        for (size_t i = 0; i < (pos-1); i++)
        {
            temp=ptr;
            ptr=ptr->link;
        }
        temp->link=ptr->link;
        free(ptr);
        temp=NULL;
        return start;
    }
}
