#include "create_single_linked_list.c"
#include "print_elements_of_single_linked_list.c"

int counting_elements_of_single_linked_list(struct node*);
int main()
{
    struct node* head;
    int count;
    head=create_single_linked_list(head);
    count=counting_elements_of_single_linked_list(head);
    printf("\nNo of elements of linked list are: %d\n",count);
    printf("\nSize of linked list= %d\n",count);
    return 0;
}
int counting_elements_of_single_linked_list(struct node* head)
{
    int count;
    count=0;
    while (head!=NULL)
    {
        printf("%d ",head->info);
        count++;
        head=head->next;
    } 
    return count;
}