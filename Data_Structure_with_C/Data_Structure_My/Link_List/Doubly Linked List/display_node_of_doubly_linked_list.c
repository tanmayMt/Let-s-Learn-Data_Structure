void display_node_of_doubly_linked_list(struct node*);

void display_node_of_doubly_linked_list(struct node* head)
{
    while (head != NULL)
    {
        printf("|%d||%d||%d|  ",head->prev,head->info,head->next);
        head=head->next;
    }
    printf("\n");
}