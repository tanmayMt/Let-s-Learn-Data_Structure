//Find 2nd node from last node and delete that node from single nexted list.
//Considering that the head pointer is pointing to first node of the nexted list.
//and size of the node is 5.

#include<stdio.h>
#include<stdlib.h>
struct node* create_single_linked_list(struct node*);
void print_elements_of_single_linked_list(struct node*);
struct node * delete_2nd_node_from_end(struct node *);

struct node  // Self-referentical structure
{
    int info;
    struct node* next;
};

int main()
{
    struct node* head;
    head=NULL;
    
    head=create_single_linked_list(head);
    print_elements_of_single_linked_list(head);

    head=delete_2nd_node_from_end(head);

    print_elements_of_single_linked_list(head);
    return 0;
}

struct node * delete_2nd_node_from_end(struct node * head)
{
    //Size of linked list
    int count,size_of_linked_list;
    struct node * ptr;
    count=0;
    
    ptr=head;
    while (ptr != NULL)
    {
        count++;
        ptr=ptr->next;
    }
    size_of_linked_list=count;
    printf("Size of linked list= %d\n",size_of_linked_list);

    //Calculating position of node from front 
    // If the position of the node from last is 2 
    //then the position of that node from front will be
    //(size__of_linked_list - 2) +1)
    //((      5             - 2) +1)
    
    int pos_from_end,pos_from_front;
    pos_from_end=2;
    pos_from_front=((size_of_linked_list - pos_from_end)+1);

    struct node * temp,*prev;
    pos_from_front=pos_from_front-1;

    temp=head;
    while (pos_from_front != 0)
    {
        prev=temp;
        temp=temp->next;
        pos_from_front--;
    }
    prev->next=temp->next;
    free(temp);
    temp=NULL;
    prev=NULL;
    return head;
}

struct node* create_single_linked_list(struct node* start)
{
    int n;
    int count;
    char ans;
    struct node* temp;
    
    temp=malloc(sizeof(struct node));
    printf("Enter %d item for linked list:",1);
    scanf("%d",&temp->info);
    start=temp;
    count=1;
    while (count!=5)
    {
        temp->next=malloc(sizeof(struct node));
        temp=temp->next;
        printf("Enter %d item for linked list:",count+1);
        scanf("%d",&temp->info); 
        count++;
    }
    temp->next=NULL;
    return start;
}

void print_elements_of_single_linked_list(struct node* head)
{
    while (head!=NULL)
    {
        printf("%d ",head->info);
        head=head->next;
    }
    printf("\n");
}

