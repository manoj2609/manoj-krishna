#include<stdio.h>
int main()
{
    int n1=8, n2=11, *p1= &n1, *p2= &n2;
    printf("\n%u",p1);
    printf("\n%d",*p1);
   *p1++;
    printf("\n%u",p1);
    printf("\n%d",*p1);
    return 0;
}