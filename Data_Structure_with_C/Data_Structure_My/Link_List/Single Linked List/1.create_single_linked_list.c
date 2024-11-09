#include<stdio.h>
#include<stdlib.h>
struct node* create_single_linked_list(struct node*);
void print_elements_of_single_linked_list();

struct node  // Self-referentical structure
{
    int info;
    struct node* link;
};


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

void print_elements_of_single_linked_list(struct node* start)
{
    struct node* ptr;
    ptr=start;

    printf("%d ",ptr->info);
    while (ptr!=NULL)
        print_elements_of_single_linked_list(ptr->link);
}

int main()
{
    struct node* head;
    head=NULL;
    
    head=create_single_linked_list(head);
    print_elements_of_single_linked_list(head);
    return 0;
}