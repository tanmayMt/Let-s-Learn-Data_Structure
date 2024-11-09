#include"create_single_linked_list.c"
#include "print_nodes_of_single_linked_list.c"

struct node* insert_element_at_particular_position(struct node *,int,int);

int main()
{
    struct node* head;
    int data,pos;
    head=create_single_linked_list(head);
    printf("Single Linked list before inserting element at particular position:");
    print_nodes_of_single_linked_list(head);
    
    printf("Enter the number need to be inserted:");
    scanf("%d",&data);
    printf("Enter position where we need to insert value in single linked list:");
    scanf("%d",&pos);
    
    //insert_element_at_particular_position() function
    insert_element_at_particular_position(head,data,pos);

    printf("Single Linked list After inserting element at particular position:");
    print_nodes_of_single_linked_list(head);

    return 0;
}

struct node* insert_element_at_particular_position(struct node *head,int data,int pos)
{
    struct node *temp;
    struct node *ptr;
    temp=malloc(sizeof(struct node));
    temp->info=data;
    temp->next=NULL;
    //pos=1,data=88
    //What happend when the pos is 1 loop is running 4 time why
    pos=(pos-2);
    ptr=head;
    while (pos!=0)
    {
        ptr=ptr->next;
        printf("*\n");
        pos--;
    }
       
    temp->next=ptr->next;
    ptr->next=temp;
    return head;
}