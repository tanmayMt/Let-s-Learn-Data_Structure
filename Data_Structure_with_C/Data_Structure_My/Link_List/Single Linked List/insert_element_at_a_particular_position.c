struct node* insert_at_a_particular_position(struct node*);

struct node* insert_at_a_particular_position(struct node* start)
{
    int data,pos;
    struct node* temp;
    struct node* ptr;
    printf("Enter the number which you want to insert: ");
    scanf("%d",&data);
    printf("Enter the position where number to be insert: ");
    scanf("%d",&pos);

    temp=malloc(sizeof(struct node));
    temp->info=data;
    
    ptr=start;
    for(size_t i=0;i<pos-2;i++)
       ptr=ptr->link;
    temp->link=ptr->link;
    ptr->link=temp;
    return start;
}