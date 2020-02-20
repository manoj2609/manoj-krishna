/// delete and insertion using double linked list



#include <stdio.h>
#include<stdlib.h>
struct element
{
    int data;
    struct element *next;
    struct element *pre;
};
struct element *head=NULL;
void append(int val)
{
    
    struct element *ele=(struct element*)malloc(sizeof(struct element));
    ele->data= val;
    ele->next= NULL;
    ele->pre=NULL;
    if(head == NULL)
    {
        head = ele;
    }
    else
    {
        
        struct element *t=head;
        while(t->next != NULL)
        {
            t=t->next;
        }
        
        t->next=ele;
        ele->pre=t;
    }
}
void display()
{
    for(struct element *t=head;t != NULL;t=t->next)
        printf("\t%d",t->data);
}
void del(int pos)
{
    struct element*t;
    int cnt;
    for( t = head,cnt=0;t!=NULL;t=t->next,cnt++);
         if (pos<=0||pos>cnt)
         {
            printf("\n invalid position..");
            return;
         }
    if(pos==1)
    {
        struct element*t1=head;
        head=head->next;
        head->next=NULL;
        free(t1);
        return;
    }
    
    t=head;
    cnt=1;
    struct element *t1;
    while(cnt<pos)
    {
        t1=t;
        t=t->next;
        cnt++;
    }
    t->next->pre=t1;
    t1->next=t->next;
    free(t);
    return 0;
}
void reverse_disp()
{
    
    struct element *t;
    for(t=head;t->next!=NULL;t=t->next);
    for(;t!=NULL;t=t->pre)
        printf("\t%d",t->data);
    
    
}
void insert(int val,int pos)
{
    struct element *t;
    int cnt;
    for(t=head,cnt=0;t!=NULL;t=t->next,cnt++);
    if(pos<1 || pos>cnt+1)
    {
        printf("\ninvalid position to insert ");
        return;
    }
    struct element *ne=(struct element*)malloc(sizeof(struct element));
    ne->data=val;
    ne->next=NULL;
    ne->pre=NULL;
    if(pos==1)
    {
        ne->next=head;
        head->pre=ne;
        head=ne;
        return;
    }
    if(pos==cnt+1)
    {
        struct element *t;
        for(t=head;t->next != NULL;t=t->next);
        t->next=ne;
        ne->pre=t;
        return;
    }
    int c; 
    for(t=head,c=1;c<pos;c++,t=t->next);
    struct element *t1=t->pre;
    ne->next=t;
    ne->pre=t1;
    t1->next=ne;
    t->pre=ne;
    return;
}
int main()
{
    while(1)
    {
        printf("\n MENU");
        printf("\n====");
        printf("\n1.append");
        printf("\n2.display");
        printf("\n3.delete(position)");
        printf("\n4.reverse display");
        printf("\n9.exit");
        printf("\n5.insert");
        int ch,v,p;
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
                   display();
                   break;
            case 4:printf("\n reverse list is");
                   reverse_disp();
                   break;
            case 5:printf("\nenter a to insert:");
                    scanf("%d",&v);
                    printf("\nposition ? : ");
                    scanf("%d",&p);
                    insert(v,p);
                    break;
            case 9:exit(0);
                   default:
                   printf("\ninvalid choice..");
        }
        
    }
   

    return 0;
}
