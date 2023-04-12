#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};


struct node *CreateLinkedList(int arr[] , int n)
{
    struct node *head = NULL;
    struct node *prev;
    struct node *p;

    for(int i = 0 ; i < n ; i++)
    {
        p = (struct node *)malloc(sizeof(struct node));
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


struct node *floyd(struct node *head)
{
    struct node *slow = head;
    struct node *fast = head;

    while(fast != NULL && fast->next != NULL)
    {
        slow = slow -> next;
        fast = fast ->next->next;
    }
    return slow;
}


struct node *reverse(struct node *slow)
{
    if (slow->next == NULL || slow == NULL) 
        return NULL;

    struct node *prevnode = slow;
    struct node *currentnode = slow->next;

    while(currentnode != NULL)
    {
        struct node *nextnode = currentnode->next;
        currentnode->next = prevnode;
        prevnode = currentnode;
        currentnode= nextnode;
    }
    slow->next = NULL;
    return prevnode;
}





void traversal(struct node *head)
{
    while(head != NULL)
    {
        printf("%d",head->data);
        head = head->next;
    }
}




int main()
{
    int num;
    scanf("%d",&num);

    int arr[num];
    for(int i = 0 ; i < num ; i++)
        scanf("%d",&arr[i]);
        
    struct node *head = CreateLinkedList(arr , num);

    struct node *mid = floyd(head);
    struct node *tail = reverse(mid);
   

    int max = 0;
    int sum = 0;
    while( tail != NULL)
    {
        sum = head->data + tail->data;
        head=head->next;
        tail=tail->next;

        if(sum > max)
            max = sum;
    }

    printf("%d\n",max);
    
    
    
}