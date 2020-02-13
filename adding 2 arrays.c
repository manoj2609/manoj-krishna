#include<stdio.h>
int main()
{
    int a[4],b[4],c[4];
    int i;
    printf("\nenter 4 values for first array:\n");
    for(i=0;i<4;i++)
    scanf("%d",&a[i]);
    printf("\nenter 4 values for second array:\n");
    for(i=0;i<4;i++)
    scanf("%d",&b[i]);
    for(i=0;i<4;i++)
    c[i]=a[i]+b[i];
    for(i=0;i<4;i++)
    printf("\n%d",c[i]);
    return 0;
}