struct node* delete_first_node_from_single_linked_list(struct node* );

struct node* delete_first_node_from_single_linked_list(struct node* start)
{
    if(start==NULL)
       printf("Linked list is empty!");

    struct node* temp;

    temp=start;
    start=start->link;
    free(temp);
    temp=NULL;
    return start;
}