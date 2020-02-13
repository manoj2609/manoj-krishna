#include<stdio.h>
int main()
{
    int a[4],b[4],c[8];
    int i;
    printf("\nenter 4 values for first array:\n");
    for(i=0;i<4;i++)
    scanf("%d",&a[i]);
    printf("\nenter 4 values for second array:\n");
    for(i=0;i<4;i++)
    scanf("%d",&b[i]);
    for(i=0;i<4;i++)
    {
    c[2*i]=a[i];
    c[2*i+1]=b[i];
    }
    for(i=0;i<8;i++)
    printf("\n%d",c[i]);
    return 0;
}