struct node* insert_at_end_of_single_linked_list(struct node* );

struct node* insert_at_end_of_single_linked_list(struct node* start)
{
    struct node* temp;
    struct node* ptr;
    int n;

    printf("\nEnter the number for last node:");
    scanf("%d",&n);

    temp=malloc(sizeof(struct node));
    temp->info=n;
    temp->link=NULL;

    ptr=start;
    while (ptr->link != NULL)
        ptr=ptr->link;
    ptr->link=temp;
    return start;
}