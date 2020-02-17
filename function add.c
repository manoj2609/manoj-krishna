#include<stdio.h>
int main()
{
    int n1=34, n2=55,s;  //prototype
    int add(int,int);    //execution
    s=add(n1,n2);
    printf("\n%d",s);
    printf("\n%d",add(44,555));
    printf("\n%d",add(5*5,70/3));
    printf("\n%d",add(add(100,200),300));
    return 0;
}
int add(int x,int y)    //defination
{
    return 0;
}