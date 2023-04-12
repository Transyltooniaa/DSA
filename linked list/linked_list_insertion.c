#include <stdio.h>
#include <stdlib.h>


// defining structure

struct node
{
    int data;
    struct node *next;
};


//traversing through the linked list
void linkedListTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

//case 1 : insertion of node at the beginning
struct node * insertion_at_first(struct node *head ,int value)
{
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    ptr -> data = value;
    ptr -> next = head;

    return ptr;
}

//case 2: insertion at last
struct node * insertion_at_last(struct node *head ,int value)
{
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    struct node * p = head;

    while(p->next != NULL) 
        p = p->next;
    
    p->next = ptr;
    ptr->next = NULL;
    ptr->data = value;

    return head;
}

//case 3 : insertion at index

struct node * insert_at_index(struct node *head , int data , int index)
{
    struct node * ptr = (struct node *) malloc(sizeof(struct node));
    struct node * p = head;
    int i = 0;

    while (i!=index-1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

// Case 4
struct node * insertAfternode(struct node *head, struct node *prevnode, int data)
{
    struct node * ptr = (struct node *) malloc(sizeof(struct node));
    ptr->data = data;

    ptr->next = prevnode->next;
    prevnode->next = ptr;

    
    return head;
}


int main()
{
    // defining structure pointer
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
 
    // Allocate memory for nodes in the linked list in Heap
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
 
    // Link first and second nodes
    head->data = 7;
    head->next = second;
 
    // Link second and third nodes
    second->data = 11;
    second->next = third;
 
    // Link third and fourth nodes
    third->data = 41;
    third->next = fourth;
 
    // Terminate the list at the third node
    fourth->data = 66;
    fourth->next = NULL;
    
    //list traversal
    linkedListTraversal(head);

    /*
        write your command here . Call function
    */

    linkedListTraversal(head); 
   
   
    return 0;
}
