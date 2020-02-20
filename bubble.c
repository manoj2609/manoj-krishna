#include<stdio.h>
int main()
{
    int a[5],i,j;
    printf("\nenter 5 numbers:");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    for(i=0;i<4;i++)
        for(j=4;j>i;j--)
        if(a[j]<a[j-1]){         // if a[j]>a[j-1] it gives desending
        int t=a[j];
        a[j]=a[j-1];
        a[j-1]=t;
    }
    printf("\nsorted list is:\n");
    for(i=0;i<5;i++)
    printf("%d\n",a[i]);
    return 0;
}

