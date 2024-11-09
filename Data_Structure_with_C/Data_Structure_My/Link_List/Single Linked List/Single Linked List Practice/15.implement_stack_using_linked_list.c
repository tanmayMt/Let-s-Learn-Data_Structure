#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node * link;
};
typedef struct node STACK;
void push(struct node **,int);
int pop(struct node **);
int isEmpty(struct node *);

int main()
{
    struct node * head;
    head=NULL;
    int choice,n;
    while (1)
    {
        printf("1.Push\n2.Pop\n3.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
                printf("Enter the number to insert in the stack:");
                scanf("%d",&n);
                push(&head,n);
                break;
            case 2:
                n=pop(&head);
                printf("%d is popped from the stack\n",n);
                break;
            case 3:
                exit(1);
           default:
                printf("Wrong Choice!!!!!!!!");
        }   
    }
}

void push(struct node ** head, int n)
{
    struct node * temp;
    temp=malloc(sizeof(struct node));
    temp=NULL;
    if (temp==NULL)
    {
        printf("Stack Overflow!\n");
        exit(1);
    }
    
    temp->info=n;
    temp->link=*head;
    *head=temp;

    printf("%d is pushed into the stack.\n",temp->info);
}

int pop(struct node ** head)
{
    struct node * temp;
    int n;
    if(isEmpty(*head) == 1)
    {
        printf("Stack underflow!!!!!!!\n");
        exit(1);
    }
    temp=*head;
    n=temp->info;
    *head=temp->link;
    free(temp);
    return n;
}

int isEmpty(struct node * head)
{
    return(head == NULL? 1:0);
}