#include<stdio.h>
#include<stdlib.h>
struct st
{
    int info;
    struct st* linK;
};
struct st* create(struct st*);
void print_elements(struct st*);
int main()
{
    struct st* head;
    int count;
    head=NULL;

    head=create(head);
    printf("\nElements of the liked list are: ");
    print_elements(head);
    return 0;
}

struct st* create(struct st* start)
{
    struct st* temp;
    char answare;

    start=(struct st*)malloc(sizeof(struct st));
    temp=start;

    while (1)
    {
        printf("Enter an integer:");
        scanf("%d",&temp->info);
        fflush(stdin);
        
        printf("Continue(Y/N)?:");
        scanf("%c",&answare);
        if(answare=='Y' || answare=='y')
        {
            temp->linK=(struct st*)malloc(sizeof(struct st));
            temp=temp->linK;
        }
        else
        {
            temp->linK=NULL;
            return start;
        }
    }
}

void print_elements(struct st* head)
{
    if(head==NULL)
    {
      printf("Link List is Empty!!!!!!!!!!!!!!!!");
      exit(1);
    }
    struct st* ptr;
    ptr=head;

    while (ptr != NULL)
    {
        printf("%d ",ptr->info);
        ptr=ptr->linK;
    }
    printf("\n");
}