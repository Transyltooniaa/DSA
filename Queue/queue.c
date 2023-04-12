#include<stdio.h>
#include<stdlib.h>

struct queue{
    int size;
    int fptr;
    int bptr;
    int *arr;
};



int isEmpty(struct queue *q)
{
    if(q->fptr == q->bptr)
        return 1;
    
    return 0;
}

int isFull(struct queue *q)
{
    if(q->bptr == q->size-1)
        return 1;
    
    return 0;
}

void enqueue(struct queue *q , int val)
{
    if(isFull(q))
        printf("This Queue is full\n");
    
    else
    {
        q->bptr++;
        q->arr[q->bptr] = val;
        printf("enqueued the element: %d\n" , val);
    }
}


int dequeue(struct queue *q )
{
    int val = -1;

    if(isEmpty(q))
        printf("queue is empty\n");
    
    else
    {
        q->fptr++;
        val = q->arr[q->fptr]; 
    }
    return val;
}




int main()
{
    struct queue *q;
    q = (struct queue *)malloc(sizeof(struct queue));
    q->size = 10;
    q->arr = (int *)malloc(sizeof(int) * q->size);
    q->fptr = q->bptr = 0;

    enqueue(q, 12);
    enqueue(q, 15);
    enqueue(q, 1); 
    printf("Dequeuing element %d\n", dequeue(q));
    printf("Dequeuing element %d\n", dequeue(q));
    printf("Dequeuing element %d\n", dequeue(q)); 
    enqueue(q, 45);
    enqueue(q, 45);
    enqueue(q, 45);

    if(isEmpty(q))
        printf("Queue is empty\n");
    
    if(isFull(q))
        printf("Queue is full\n");
    
 

    return 0;
}