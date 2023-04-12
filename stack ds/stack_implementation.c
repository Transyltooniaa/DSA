#include<stdio.h>
#include<stdlib.h>


// defining structure
struct stack 
{
    int size;
    int top;
    int *arr;
};

//checking whether the stack is empty or not;
int isEmpty(struct stack *ptr)
{
    if(ptr->top == -1)
        return 1;
    
    return 0;
}


//checking whether the stack is full or not , not needed in python
int isFull(struct stack *ptr)
{
    if( ptr->top == (ptr->size) -1)
        return 1;
    
    return 0;
}

//to append an element in a stack
void push(struct stack *ptr , int val)
{   
    // calling isFull function to check whether stack is full or not
    if (isFull)
        printf("stack overflow");
    
    else
    {
        ptr->top++;                     // incrementing the value of top to keep track of new element 
        ptr->arr[ptr->top] = val;       // adding new element in the array
    }
}


int pop(struct stack *ptr)
{
    // calling isEmpty function to check whether stack is empty or not
    if (isEmpty)
        printf("stack underflow");
        return -1;

    int val = ptr->arr[ptr->top];    // storing the element before it is popped so that it can be returned;
    ptr->top--;                      // decrementing the value of top
    return val;                      // returning the popped element
    
}

// to look within all the element of stack . 'i' is the position and not the index . position is 1 at top 
// size at the bottom

int peek(struct stack* sp, int i){
    int arrayInd = sp->top -i + 1;  // mathematical equation to convert position to index
    if(arrayInd < 0){
        printf("Not a valid position for the stack\n");
        return -1;
    }
    else{
        return sp->arr[arrayInd];
    }
}

//funtion to return the top element of the stack
int stackTop(struct stack *ptr)
{
    return ptr->arr[ptr->top];
}

//function to return the last element of the stack
int stackBottom(struct stack *ptr)
{
    return ptr->arr[0];
}


int main()
{

    struct stack *s;
    s->size = 80;
    s->top = -1;
    s->arr = (int *)malloc(sizeof(int) * s->size);


    /*
        call functions here;
    
    */

}