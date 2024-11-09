#include<stdio.h>
#include "node_for_single_linked_list.c"
#include "create_single_linked_list.c"
#include "print_elements_of_single_linked_list.c"
struct node* insert_at_a_particular_position(struct node*);

void main()
{
    struct node* head;
    head=create_single_linked_list(head);
    print_elements_of_single_linked_list(head);

    head=insert_at_a_particular_position(head);
    printf("-After insert element at particular possition-\n");
    print_elements_of_single_linked_list(head);
}

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
    
    if(pos==1)//If we want to insert at position 1
    {
        temp->link=ptr;
        start=temp;
        return start;
    }
    ptr=start;
    for(size_t i=0;i<pos-2;i++)
       ptr=ptr->link;
    temp->link=ptr->link;
    ptr->link=temp;
    return start;
}