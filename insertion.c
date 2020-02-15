#include<stdio.h>
int main()
{
    int a[5],i,j,v;
    printf("\nenter 5 numbers:");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    for(i=0;i<5;i++)
    {
        v=a[i];
        j=i-1;
        while(j>=0 && a[j]>v)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=v;
    }
    printf("\nsorted list is:\n");
    for(i=0;i<5;i++)
    printf("%d\n",a[i]);
    return 0;
}