#include "create_single_linked_list.c"
#include "print_nodes_of_single_linked_list.c"

struct node* insert_element_at_end_of_single_linked_list(struct node*,int);

int main()
{
    struct node* head;
    int data;
    head=create_single_linked_list(head);
    printf("Single linked list before insert elements at the end:\n");
    print_nodes_of_single_linked_list(head);


    printf("\n");
    

    printf("Enter a number to be inserted at the end of the linked list:");
    scanf("%d",&data);
    
    //insert element at end of single linked list
    head=insert_element_at_end_of_single_linked_list(head,data);
    
    printf("Single linked list after insert elements at the end:\n");
    print_nodes_of_single_linked_list(head);
}

struct node* insert_element_at_end_of_single_linked_list(struct node *head,int data)
{
    struct node *temp,*ptr;
    
    temp=malloc(sizeof(struct node));
    temp->info=data;
    temp->next=NULL;
    ptr=head;
    while (ptr->next!=NULL)
        ptr=ptr->next;
    ptr->next=temp;
    return head;
}