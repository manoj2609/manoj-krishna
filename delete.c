
//// deletion 

#include <stdio.h>
#include<stdlib.h>
struct element
{
    int data;//will contain the data of element
    struct element *next;//will hold adress of next element
};
struct element *head=NULL;//head points to first element and it contains NULL now as there is no element in the list.
void append(int val)//add a new element at the end of list
{
    //creating a new element to be appended
    struct element *ele=(struct element*)malloc(sizeof(struct element));
    ele->data= val;//assigning value of this new element
    ele->next= NULL;//as it is an independent element,its next is null
    if(head == NULL)//if true then list is empty
    {
        head = ele;//so,make new (ele)as first element
    }
    else//if false ,then list is not empty,so get address of last element and make last element to point to new element
    {
        //reaching to last element
        struct element *t=head;
        while(t->next != NULL)
        {
            t=t->next;
        }
        //after the loop, t points to last element and its next part is connected to new element(ele).
        t->next=ele;
    }
}
void display()//function to display the list(i.e display all the data valuesof each element).
{
    for(struct element *t=head;t != NULL;t=t->next)
        printf("\t%d",t->data);
}
void del(int pos)//specified positioned element ids deleted
{
    struct element*t;
    int cnt;
    for( t = head,cnt=0;t!=NULL;t=t->next,cnt++)
         if (pos<=0||pos>cnt)//validating position
         {
            printf("\n invalid position..");
            return;
         }
    if(pos==1)//to delete first element
    {
        struct element*t1=head;
        head=head->next;
        free(t1);
        return;
    }
    //to delete any element from 2nd to last
    t=head;
    cnt=1;
    struct element *t1;
    while(cnt<pos)
    {
        t1=t;
        t=t->next;
        cnt++;
    }
    t1->next=t->next;
    free(t);
    return 0;
}//end of delete function
int main()
{
    while(1)
    {
        printf("\n MENU");
        printf("\n====");
        printf("\n1.append");
        printf("\n2.display");
        printf("\n3.delete(position)");
        printf("\n.9exit");
        int ch,v;
        printf("\n enter your choice :");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("enter a number:");
                  scanf("%d",&v);
                  append(v);
                  break;
            case 2:printf("\nlist is");
                   display();
                   break;
            case 3:printf("\n enter position of element to be deleted :");
                   scanf("%d",&ch);
                   del(ch);
                   break;
            case 9:exit(0);
                   default:
                   printf("\ninvalid choice..");
        }
        
    }
   

    return 0;
}