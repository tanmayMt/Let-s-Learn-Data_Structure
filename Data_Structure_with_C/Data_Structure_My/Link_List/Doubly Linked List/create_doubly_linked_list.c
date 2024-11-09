struct node* create_doubly_linked_list(struct node*);

struct node* create_doubly_linked_list(struct node* head)
{
    int n;
    char ans;
    struct node* temp,*prev;

    temp=malloc(sizeof(struct node));
    head=temp;
    prev=NULL;
    
    while (1)
    {
        printf("Enter an number to be inserted:");
        scanf("%d",&n);
        fflush(stdin);

        temp->prev=prev;
        temp->info=n;
        
        printf("Continue(Y/N)?:");
        scanf("%c",&ans);
        if (ans=='Y' || ans=='y')
        {
            temp->next=malloc(sizeof(struct node));
            prev=temp;
            temp=temp->next;
            temp->prev=prev;
        }
        else
        {
            temp->next=NULL;
            temp->prev=prev;
            return head;
        }
    }
}