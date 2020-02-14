#include<stdio.h>
int main()
{
    int a[6];
    int i;
    int sv;
    printf("\nenter 6 values :\n");
    for(i=0;i<6;i++)
    scanf("%d",&a[i]);
    printf("\n enter searchvalue:");
    scanf("%d",&sv);
    for(i=0;i<6;i++)
    if(sv==a[i])
    {
        printf("\nfound at:%d",i+1);
        break;
    }
    if(i==6)
    printf("\nnot found.");
    return 0;
}