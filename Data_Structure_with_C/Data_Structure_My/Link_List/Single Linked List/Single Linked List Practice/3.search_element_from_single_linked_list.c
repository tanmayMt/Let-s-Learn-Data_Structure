#include "create_single_linked_list.c"
#include "print_nodes_of_single_linked_list.c"
struct node* search_element_from_single_linked_list(struct node*,int);

int main()
{
    int key;
    struct node* head;
    struct node* temp;
    head=NULL;
    head=create_single_linked_list(head);
    print_nodes_of_single_linked_list(head);

    printf("Enter the number to be search:");
    scanf("%d",&key);
    temp=search_element_from_single_linked_list(head,key);
    return 0;
}

struct node* search_element_from_single_linked_list(struct node* temp,int key)
{
    while (temp!=NULL)
    {
        if (temp->info==key)
        {
            printf("%d is found(Memory Address:%d)\n",key,temp);
            return temp;
        }
        temp=temp->next;
    }
    printf("%d is not found in the list!!!!!\n",key);
    return NULL;
}