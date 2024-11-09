struct node* insert_node_at_beginning_of_double_linked_list(struct node*,int);

struct node* insert_node_at_beginning_of_double_linked_list(struct node* start,int data)
{
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    // temp->prev=NULL;
    temp->info=data;
    temp->next=start;
    start->prev=temp;
    start=temp;
    return start;
}