#include<stdio.h>
#include<stdlib.h>
#include "print_nodes_of_single_linked_list.c"
void create_linked_list(struct node** head);
struct node
{
    int info;
    struct node* link;
};
int main()
{
    struct node * head;
    head=NULL;
    create_linked_list(&head);
    printf("-Single linked list-\n");
    print_nodes_of_single_linked_list(head);

    return 0;
}
void create_linked_list(struct node** head)
{
    struct node* temp;
    char ans;
    temp=(struct node*)malloc(sizeof(struct node));
    *head=temp;
    while (1)
    {
        printf("Enter elements for linked List: ");
        scanf("%d",&temp->info);
        fflush(stdin);
        
        printf("Continue(Y/N)?: ");
        scanf("%c",&ans);

        if (ans=='Y' || ans=='y')
        {
            temp->link=(struct node*)malloc(sizeof(struct node));
            temp=temp->link;
        }
        else
        {
            temp->link=NULL;
        }   
    }
}