#include<stdio.h>
#include<stdlib.h>

typedef struct node{

    int data;
    struct node *next;
}node;



void InsertIntoArray(int *p ,int n)
{
    for(int i = 0 ; i < n ; i++)
        scanf("%d",(p+i));
}


node *create_linked_list(int arr[] , int n)
{
    node *head = NULL;
    node *prev;
    node *p;

    for(int i = 0 ; i < n ; i++)
    {
        p = (node *)malloc(sizeof(node));
        p->data = arr[i];
        p->next = NULL;

        if(head == NULL)
            head = p;
        else
            prev->next = p;

        prev = p;
    }
    return head;
}

void TraverseLinkedList(node *head)
{
    node *p;
    p = head;

    while(p != NULL)
    {
        printf("%d\n",p->data);
        p = p->next;
    }
    
}


int main()
{
    int n;
    printf("enter number of elements in a linked list:\n");
    scanf("%d",&n);

    int arr[n];
    printf("enter elements of the array");
    InsertIntoArray(arr,n);

    node *head = create_linked_list(arr , n);

    TraverseLinkedList(head);
}
