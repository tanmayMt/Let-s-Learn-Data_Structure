#include<stdio.h>
void print_elements_of_single_linked_list(struct node*);

void print_elements_of_single_linked_list(struct node* start)
{
    struct node* ptr;
    ptr=start;

    while (ptr!=NULL)
    {
        printf("%d ",ptr->info);
        ptr=ptr->link;
    }
    printf("\n");
}