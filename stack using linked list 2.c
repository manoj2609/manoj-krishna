
///stack using linked list :


#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*top=NULL;
empty()
{
    return top==NULL? 1:0;
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
void push(int val)
{
    struct node *new_ele;
    new_ele=(struct node*)malloc(sizeof (struct node));
    new_ele->data=val;
    new_ele->next=top;  // head=top
    top=new_ele;
    return 0;
}
int pop(void)     /// removing the top element and replacing the 2nd element to top.
{
    struct node *temp=top;
    top=top->next;  /// removed 1st element but now adding adress of 1st element to 2nd element.
    int v=temp->data;
    free(temp);
    return v;
}
int main()
{
    push(100);
    push(200);
    push(300);
    push(400);
    push(500);
    printf("\n%d",pop()); /// 500
    pop();
    printf("\n%d",pop());
    return 0;
}