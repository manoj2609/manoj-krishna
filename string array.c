/// string arrays.
#include<stdio.h>
#include<string.h>
int main()
{
    char s[5][50];
    int i;
    printf("\nEnter 5 names:\n");
    for(i=0;i<5;i++)
    scanf("%s",s[i]);
    printf("\nAll the names are:\n");
    for(i=0;i<5;i++)
    printf("\n%s",s[i]);
    return 0;
}


