#include<stdio.h>
struct test1
{
    int n;
    int *p;
};
int main()
{
    struct test1 t;
    t.p=t.n;
    t.n=50;
    printf("\n%d",*t.p);
    return 0;
}
