/// desiging a single linked list program:

#include<stdio.h>
#include<stdlib.h>
struct element
{
    int data;
    struct element *next;
};
struct element *head=NULL;  //head points to first element and it contains null now as there is no element in the list.
void append(int val) // add a new element at the end of the list
{
    struct element *ele=(struct element*)malloc(sizeof(struct element));
    ele->data=val;    /// assinging value to this new element
    ele->next=NULL;   /// as it is an independent element,its next is null 
    if(head == NULL)  /// if true then list is empty
    {
        head=ele;  /// so,make new element (ele) as first element
    }
    else   /// if false,then list is not empty,so address of last element and make last element to point to new element
    {
           /// reaching to last element
        struct element *t=head;
        while(t->next!=NULL)
        {
            t=t->next;    
        }
          /// after the loop t points to last element and its next pair is connected to new element(ele).
        t->next=ele;
    }
}
void display()   // function to display the list(i.e,display all the data values to each element)
{
    for(struct element *t=head;t!=NULL; t=t->next)
    printf("\t%d",t->data);
}
int main()
{
    append(12);
    append(45);
    append(564);
    append(56);
    display();
    return 0;
}
