#include "create_single_linked_list.c"
#include "print_nodes_of_single_linked_list.c"
void insert_at_beginning_of_single_linked_list(struct node**, int);

int main()
{
    struct node* head;
    int data;
    head=create_single_linked_list(head);

    printf("Single linked list before insert elements at the beginning:\n");
    print_nodes_of_single_linked_list(head);
    
    printf("\n");
    
    printf("Enter number to be inserted at the beginning of linked list:");
    scanf("%d",&data);
    //Insert at beginning of the linked list
    insert_at_beginning_of_single_linked_list(&head,data);

    printf("Single linked list after insert elements at the beginning:\n");
    print_nodes_of_single_linked_list(head);
    return 0;
}

void insert_at_beginning_of_single_linked_list(struct node** head, int data)
{
    struct node* temp;
    temp=malloc(sizeof(struct node));
    temp->info=data;
    temp->next=*head;
    *head=temp;
}