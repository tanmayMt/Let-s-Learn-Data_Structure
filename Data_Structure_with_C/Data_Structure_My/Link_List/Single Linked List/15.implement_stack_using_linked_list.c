#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node* next;
};
typedef struct node STACK;

void push(STACK**,int);
int pop(STACK**);
int empty(STACK**);
void print(STACK**);

int main()
{
    STACK *s;
    s=NULL;
    int choice,n;
    while (1)
    {
        printf("1.Push\n2.Pop\n3.print\n4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            printf("Enter a number which be inserted to the stack: ");
            scanf("%d",&n);
            push(&s,n);
            break;
        case 2:
            n=pop(&s);
            printf("%d is popped.\n",n);
            break;
        case 3:
            print(&s);
            break;
        case 4:
            exit(1);
            break;
        default:
            printf("Wrong Choice\n");
        }
    }
    return 0;
}

void push(STACK** ps,int n)
{
    STACK* temp;
    temp=malloc(sizeof(STACK));

    if (temp==NULL) //Stack overflow occurs
    {
        printf("Stack Overflow!\n");
        printf("We need to pop elements from linked list:\n");
        return;
    }
    
    temp->info=n;
    temp->next=*ps;
    *ps=temp;
}

int pop(STACK** ps)
{
    STACK* temp;
    int n;
    if(empty(ps) == 1)
    {
        printf("The Stack is empty!!!\n");
        exit(1);
    }
    temp=*ps;
    n=temp->info;
    *ps=temp->next;
    free(temp);
    return n;
}

int empty(STACK** ps)
{
    return(*ps==NULL ? 1:0);
}

void print(STACK** sp)
{
    STACK* temp=*sp;
    while (temp != NULL)
    {
        printf("%d ",temp->info);
        temp=temp->next;
    }
    printf("\n");
}