#include<stdio.h>
int main()
{
    void fun(int*);
    int i=234;
    printf("\n%d",i);
    fun(&i);
    printf("\n%d",i);
    return 0;
}
void fun(int *p)
{
    *p=1222;
}