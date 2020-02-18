#include<stdio.h>
struct test1
{
    int n;
    int *p;
};
int main()
{
    struct test1 t,*ptr;
    ptr=&t;
    ptr->p=&ptr->n;
    scanf("%d",ptr->p);
    printf("\n%d",*ptr->p);
    return 0;
}