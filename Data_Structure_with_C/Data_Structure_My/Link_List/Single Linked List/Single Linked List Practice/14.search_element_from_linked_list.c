#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node * next;
};

struct node * create_single_linked_list();
void print_nodes_of_single_linked_list(struct node*);
struct node * search_element_from_single_linked_list(struct node *,int);
int main()
{
    struct node * head;
    int key;
    head=create_single_linked_list(head);
    printf("Created Single Linked List:\n");
    print_nodes_of_single_linked_list(head);
    
    printf("Enter the number to search:");
    scanf("%d",&key);
    head=search_element_from_single_linked_list(head,key);

    return 0;
}

struct node * create_single_linked_list(struct node* head)
{
    struct node * temp;
    char ans;
    temp=malloc(sizeof(struct node));
    head=temp;
    while (1)
    {
        printf("Enter the element to be inserted:");
        scanf("%d",&temp->info);
        fflush(stdin);
        printf("Continue(Y/N)?:");
        scanf("%c",&ans);

        if (ans=='Y' || ans=='y')
        {
            temp->next=malloc(sizeof(struct node));
            temp=temp->next;
        }
        else
        {
            temp->next=NULL;
            return head;
        }
    }
}

void print_nodes_of_single_linked_list(struct node* head)
{
    if (head==NULL)
    {
        printf("Single linked list is empty:\n");
        return;
    }
    
    while (head != NULL)
    {
        printf("|%d|%d|  ",head->info,head->next);
        head=head->next;
    }
    printf("\n");
    return;
}

struct node * search_element_from_single_linked_list(struct node * head, int key)
{
    int count;
    count=1;
    while (head!=NULL)
    {
        if (head->info==key)
        {
            printf("%d is found at position %d(Memory Address %d)",key,count,head);
            return head;
        }
        head=head->next;
        count++;
    }
    printf("%d is not found!\n",key);
    return NULL;
}