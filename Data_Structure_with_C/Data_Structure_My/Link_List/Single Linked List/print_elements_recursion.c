#include<stdio.h>
void print_elements_recursion(struct node*);

void print_elements_recursion(struct node* start)
{
    struct node* ptr;
    ptr=start;

    printf("%d ",ptr->info);
    while (ptr!=NULL)
        print_elements(ptr->link);
}