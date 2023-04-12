#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};


//head of the linked list;
struct node * top = NULL; 


//a function to traverse through the linked list;
void linked_list_traversal(struct node *ptr)
{
    while( ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr -> next;   
    }
}


// a function to check whether stack is empty or not;
int isEmpty(struct node *top)
{
    if (top == NULL)
        return 1;
    
    else
        return 0;
}


// a function to checl whether stack is full or not;
int isFull(struct node *top)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    
    if (p == NULL)         // if malloc is not able to allocate memory then it returns 1 because it is full;
        return 1;
    
    else
        return 0;
}

// a function to push elements in a stack;
void push(struct node *tp , int val)
{
    if (isFull(top))
        printf("Stack Overflow\n");
    
    else{
        struct node *ptr = (struct node *)malloc(sizeof(struct node));
        ptr->data = val;
        ptr -> next = tp;
        top = ptr;
    }
}


// a function to pop elements from a stack;
int pop(struct node *tp)
{
    if (isEmpty(top))
        printf("Stack Underflow\n");
    
    else
    {
        int val = top->data;
        struct node *ptr = tp;
        top = tp->next;
        free(ptr);
        return val;
}
}

int main()
{
    push(top , 7);
    push(top , 8);
    push(top , 9);
    linked_list_traversal(top);

    pop(top);
    pop(top);
    linked_list_traversal(top);
    pop(top);
    pop(top);


}