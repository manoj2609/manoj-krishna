#include<stdio.h>
int main()
{
    int n1=11, n2=8, *p1= &n1, *p2= &n2;
    int s, *p3= &s;
    *p3=*p1+*p2;
    printf("\n%d",s);
    printf("\n%u",p1);
    printf("\n%d",*p1);
    printf("\n%u",p2);
    p1=p1+3;
    printf("\n%u",p1);
    printf("\n%d",*p1);
    printf("\n%d",*p2);
    return 0;
}