#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void printList(struct node* list)
{
    while (list != NULL)
    {
        printf("%d\n", list->data);
        list = list->next;
    }
}

// reverse the linked list using recursion
void fun(struct node* list)
{
    if(list == NULL)
    {
      return;
    }
    printf("%d\n",list->data);
    
    fun(list->next);
    printf("%d\n", list->data);
}

void push(struct node** head_ref,int data)
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));

    newnode->data = data;

    newnode->next = *head_ref;

    (*head_ref) = newnode;

}

void main()
{
    struct node* head = NULL;

    push(&head,1);
    push(&head,5);
    push(&head,10);
    push(&head,15);
    push(&head,20);

    // struct node* second = NULL;
    // struct node* third = NULL;
    // struct node* forth = NULL;
    // struct node* fifth = NULL;

    // head = (struct node*)malloc(sizeof(struct node));
    // second = (struct node*)malloc(sizeof(struct node));
    // third = (struct node*)malloc(sizeof(struct node));
    // forth = (struct node*)malloc(sizeof(struct node));
    // fifth = (struct node*)malloc(sizeof(struct node));

    // head->data = 1;
    // head->next = second;

    // second->data = 5;
    // second->next = third;

    // third->data = 10;
    // third->next = forth;

    // forth->data = 15;
    // forth->next = fifth;

    // fifth->data = 20;
    // fifth->next = NULL;
    //printList(head);

    head = NULL;
    fun(head);

    printf("Hello %d", sizeof(head));

}
