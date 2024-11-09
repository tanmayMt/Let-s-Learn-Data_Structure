#include<stdio.h>
#include<stdlib.h>
struct node* create_single_linked_list(struct node*);
void print_elements(struct node*);
struct node* del_any_node(struct node*);

struct node
{
    int info;
    struct node* link;
};

int main()
{
    struct node* head;
    head=NULL;
    head=create_single_linked_list(head);
    printf("Single linked list before performing deletion operation:\n");
    print_elements(head);

    head=del_any_node(head);

    printf("Single linked list after deletion operation:\n");
    print_elements(head);
    
    return 0;
}

//Create a linked list
struct node* create_single_linked_list(struct node* start)
{
    int n;
    char ans;
    struct node* temp;

    temp=malloc(sizeof(struct node));
    start=temp;
    while(1)
    {
        printf("Enter the number to be inserted:");
        scanf("%d",&n);
        fflush(stdin);
        temp->info=n;
        printf("Continue(Y/N)?:");
        scanf("%c",&ans);
        if(ans=='Y' || ans=='y')
        {
            temp->link=malloc(sizeof(struct node));
            temp=temp->link;
        }
        else
        {
            temp->link=NULL;
            return start;
        }
    }
}

//Printing elements of linked list
void print_elements(struct node* start)
{
    struct node* ptr;
    ptr=start;

    while (ptr != NULL)
    {
        printf("%d ",ptr->info);
        ptr=ptr->link;
    }
    printf("\n");
}

//Deleting elements from linked list
struct node* del_any_node(struct node* start)
{
    int n;
    struct node* temp;
    struct node* prev;

    temp=start;
    printf("Enter the number to be deleted from the single linked list:");
    scanf("%d",&n);
    while (temp!=NULL)
    {
        if (temp->info == n)
        {

            if(start == temp)
                start=temp->link;
            
            else
                prev->link=temp->link;
            free(temp);
            return start;
        }
        else
        {
            prev=temp;
            temp=temp->link;
        }
    }
}