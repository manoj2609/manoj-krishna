#include<stdio.h>
int main()
{
    int a[5],i,j,si;
    printf("\nenter 5 numbers:");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    for(i=0;i<4;i++){
        si=i;
        for(j=i+1;j<5;j++)
        if(a[j]<a[si])
        si=j;
        int t =a[i];
        a[i]=a[si];
        a[si]=t;
    }
    printf("\nsorted list is:\n");
    for(i=0;i<5;i++)
    printf("%d\n",a[i]);
    return 0;
}