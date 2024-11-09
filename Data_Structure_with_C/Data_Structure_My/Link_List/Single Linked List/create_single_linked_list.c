#include<stdio.h>
#include<stdlib.h>
// #include "node_for_single_linked_list.c"
struct node* create_single_linked_list(struct node*);


struct node* create_single_linked_list(struct node* start)
{
    int n;
    char ans;
    struct node* temp;
    
  
    temp=malloc(sizeof(struct node));
    start=temp;

    while (1)
    {
        printf("Enter the value to be inserted:");
        scanf("%d",&temp->info);
        fflush(stdin);

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