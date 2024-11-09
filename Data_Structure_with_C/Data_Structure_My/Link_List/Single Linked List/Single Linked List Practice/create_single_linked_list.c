#include<stdio.h>
#include<stdlib.h>
#include "create_node_for_single_linked_list.c"
struct node* create_single_linked_list(struct node*);

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
        fflush(stdin);
        temp->info=n;
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