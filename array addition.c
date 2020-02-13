#include<stdio.h>
int main()
{
    int a[5];
    int i,s;
    printf("\nenter 5 numbers :\n");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
      for(i=0,s=0;i<=5;i++)
    {
        s=s+a[i];
    }
    printf("\nsum id %d",s);
    return 0;
}
