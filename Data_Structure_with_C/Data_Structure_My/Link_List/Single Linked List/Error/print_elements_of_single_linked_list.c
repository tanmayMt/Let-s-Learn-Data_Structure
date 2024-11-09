#include<stdio.h>
void print_elements_of_single_linked_list(struct node*);

void print_elements_of_single_linked_list(struct node* head)
{
    while (head!=NULL)
    {
        printf("%d ",head->info);
        head=head->next;
    }
    printf("\n");
}