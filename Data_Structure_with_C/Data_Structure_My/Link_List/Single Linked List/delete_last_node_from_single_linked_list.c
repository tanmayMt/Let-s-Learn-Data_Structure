struct node* delete_last_node_from_single_linked_list(struct node*);

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