#include<stdio.h>
#include<stdlib.h>
#include "node_for_single_linked_list.c"
#include "print_elements_of_single_linked_list.c"
struct node* create(struct node*);
struct node* search(struct node*,int);

int main()
{
    struct node* head;
    int n;
    head=NULL;
    head=create(head);
    print_elements_of_single_linked_list(head);

    struct node* temp;
    printf("Enter number to find: ");
    scanf("%d",&n);
    temp=search(head,n);
    
    return 0;
}

struct node* create(struct node* start)
{
    struct node* temp;
    char ans;

    start=(struct node*)malloc(sizeof(struct node));
    temp=start;

    while (1)
    {
        printf("Enter an integer: ");
        scanf("%d",&temp->info);
        fflush(stdin);

        printf("Continue(Y/N)?: ");
        scanf("%c",&ans);
        if(ans=='Y' || ans=='y')
        {
            temp->link=(struct node*)malloc(sizeof(struct node));
            temp=temp->link;
        }
        else
        {
            temp->link=NULL;
            return start;
        }
    }
}
struct node* search(struct node* head,int key)
{
    struct node* ptr;
    ptr=head;

    while (ptr != NULL)
    {
        if (ptr->info == key)
        {
           printf("%d is found in linked list\n",key);
           return ptr;
        }
        ptr=ptr->link;
    }
    printf("%d is not found in linked list\n",key);
    return NULL;
}