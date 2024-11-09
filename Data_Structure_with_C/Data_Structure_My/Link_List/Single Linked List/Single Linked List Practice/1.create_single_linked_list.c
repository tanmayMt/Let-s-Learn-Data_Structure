#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node* next;
};
struct node* create_single_linked_list(struct node*);
void print_nodes_of_single_linked_list(struct node*);

int main()
{
    struct node* head;
    head=NULL;
    head=create_single_linked_list(head);
    print_nodes_of_single_linked_list(head);
    return 0;
}

struct node* create_single_linked_list(struct node* head)
{
    int n;
    char ans;
    struct node* temp;

    temp=malloc(sizeof(struct node));
    head=temp;
    while (1)
    {
        printf("Enter a number to be inserted:");
        scanf("%d",&n);
        temp->info=n;
        fflush(stdin);
        
        printf("Continue(Y/N)?:");
        scanf("%c",&ans);
        
        if(ans=='Y' || ans=='y')
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
    while (head!=NULL)
    {
        printf("|%d|%d|  ",head->info,head->next);
        head=head->next;
    }
    printf("\n");
}