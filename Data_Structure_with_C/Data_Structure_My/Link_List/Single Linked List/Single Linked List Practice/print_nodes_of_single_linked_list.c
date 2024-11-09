void print_nodes_of_single_linked_list(struct node*);

void print_nodes_of_single_linked_list(struct node* head)
{
    if(head==NULL)
    {
        printf("Linked list is empty!!\n");
        return;
    }
    while (head!=NULL)
    {
        printf("|%d|%d|  ",head->info,head->next);
        head=head->next;
    }
    printf("\n");
}