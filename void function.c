#include<stdio.h>
int main()
{
    void display(int);
    display(7);       //calling
    display(4);
    return 0;
}
void display(int n)
{
    for(int i=1;i<=n;i++)
    printf("\n%d",i);
}