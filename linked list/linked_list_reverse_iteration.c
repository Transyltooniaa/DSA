#include <stdio.h>
#include <stdlib.h>


// defining structure

struct node
{
    int data;
    struct node *next;
};



// a function to reverse a linked list using iteration
struct node *linkedListReverse(struct node * head)
{

    if (head->next == NULL || head == NULL) // if the head is NULL or the next of head is NULL then following statements must execute
        return NULL;

    struct node *prevnode = head;           // storing head in a structure(node) called previous node so that we don't lose head while iterating;
    struct node *currentnode = head->next;  // storing next of head in a structure(node) called previous node so that we don't lose head while iterating; 

    while (currentnode != NULL)
    {
        
        struct node *nextnode = currentnode->next; // if it is declared outside loop it will be lost because we have to make nextnode as currentnode;
                                                   // and in next step we are going to break linke between currentnode and next node therefore it must be saved otherwise it will be lost;
        currentnode->next = prevnode;
        prevnode = currentnode;
        currentnode = nextnode;
    } 
    head->next = NULL;                            // assigning first element's next as NULL;
    return prevnode;                              // returning last element to be changed as head;
}




//traversing through the linked list
void linkedListTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
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
    head = linkedListReverse(head);
    linkedListTraversal(head);

    
    return 0;
}
