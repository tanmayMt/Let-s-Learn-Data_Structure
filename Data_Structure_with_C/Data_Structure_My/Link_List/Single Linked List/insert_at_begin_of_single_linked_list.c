struct node* insert_at_begin_of_single_linked_list(struct node*);

struct node* insert_at_begin_of_single_linked_list(struct node* start)
{
    int n;
    struct node* temp;

    temp=malloc(sizeof(struct node));

    printf("Enter the number which will be inserted at the begin of the linked list:");
    scanf("%d",&n);

    temp->info=n;
    temp->link=start;
    start=temp;
    
    return start;
}