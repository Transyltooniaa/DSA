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

struct node *insert_at_first(struct node **head , int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr ->data = data;
    ptr ->next = *head;

    // *head = ptr; 
    //now we can simply type function as void and no need to assign head to function call 
    
    return ptr;
    
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
    head = insert_at_first(&head,3);
    linkedListTraversal(head);  
    return 0;
}
