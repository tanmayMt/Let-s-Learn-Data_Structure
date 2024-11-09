struct node* delete_hole_single_linked_list(struct node*);

struct node* delete_hole_single_linked_list(struct node* start)
{
    struct node* ptr;
    ptr=start;
    while (ptr!=NULL)
    {
        ptr=ptr->link;
        free(start);
        start=ptr;
    }
}
