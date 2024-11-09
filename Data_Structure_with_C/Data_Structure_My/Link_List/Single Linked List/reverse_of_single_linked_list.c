struct node* reverse_of_single_linked_list(struct node*);

struct node* reverse_of_single_linked_list(struct node* start)
{
    struct node* prev;
    struct node* next;
    prev=NULL;
    next=NULL;
    while (start!=NULL)
    {
        next=start->link;
        start->link=prev;
        prev=start;
        start=next;
    }
    start=prev;
    return start;
}