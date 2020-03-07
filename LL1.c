#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

void push(struct node** headref, int newdata)
{
    struct node *newNode = (struct node*)malloc(sizeof(struct node));

    newNode->data = newdata;
    
    newNode->next = (*headref);
   
    (*headref) = newNode;

}

void printList(struct node* node)
{
    printf("print List\n");
    while(node != NULL)
    {
        printf("%d\n",node->data);
        node = node->next;
    }
}

void printListRevese(struct node* node)
{
    // printf("print List\n");
    while(node->next == NULL)
    { 
        printListRevese(node->next);
       
    }
    printf("%d\n",node->data); 
        // node = node->next;
}

void append(struct node** headref, int data)
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node));

    struct node *lastNode = *headref;

    newnode->data = data;

    newnode->next = NULL;

    if((*headref) == NULL)
    {
        (*headref) = newnode;
        return;
    }

    while(lastNode->next != NULL)
    {
        lastNode = lastNode->next;
    }

    lastNode->next = newnode;

}

void insertAfter(struct node* prevNode, int data)
{
    if(prevNode == NULL)
    {
        printf("Previous Node Cannot be null");
        return;
    }

    struct node* newNode = (struct node*)malloc(sizeof(struct node));

    newNode->data = data;

    newNode->next = prevNode->next;

    prevNode->next = newNode;

}

void InsertAtNPos(struct node** headref, int nPos, int data)
{
    int counter = 0;
    struct node *newNode = (struct node*)malloc(sizeof(struct node));

    struct node *temp = *headref;

    newNode->data = data;

    while (nPos >= counter)
    {
        temp = temp->next;
        counter++;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void JoinList(struct node* node1, struct node* node2)
{
    while (node1->next != NULL)
       node1 = node1->next;

    node1->next = node2; 
}

int main()
{
    struct node *head = NULL;
    struct node *h2 = NULL;

    push(&head,1);
    push(&head,5);
    push(&head,16);
    push(&head,14);
    push(&head,12);
 
    printList(head);

//    append(&head, 24);

    

    printList(head);

    insertAfter(head,100);

    printList(head);


    push(&h2,100);
    push(&h2,500);
    push(&h2,160);
    push(&h2,140);
    push(&h2,120);

    printList(h2);

    JoinList(head,h2);
    printList(head);

    InsertAtNPos(&head,5,786);
    printList(head);

    printListRevese(head);
}