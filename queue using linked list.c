//// queue using linked list

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*front=NULL,*rear=NULL;
empty()
{
    return (rear == NULL)? 1 : 0 ;
}
int full()
{
    struct node*t=(struct node*)malloc(sizeof(struct node));
    if(t==NULL)
    {
        return 1;
    }
    else
    {
        free(t);
        return 0;
    }
}
void enqueue(int val)
{
    if( full() == 1 ) return;
    struct node*n=(struct node*)malloc(sizeof(struct node));
    n->data=val;
    n->next=NULL;
    if(rear == NULL)
    {
        front = n;
        rear = n;
    }
    else
    {
        rear->next=n;
        rear=n;
    }
    return;
}
int dequeue()
{
    if(empty()==1) return -1;
    if(front == rear)
    rear = NULL;
    struct node *t=front;
    front=front->next;
    int v=t->data;
    free(t);
    return v;
}
int main()
{
    enqueue(12);
    enqueue(123);
    enqueue(1234);
    enqueue(12345);
    printf("\n%d",dequeue());
    printf("\n%d",dequeue());
    printf("\n%d",dequeue());
    printf("\n%d",dequeue());
}
