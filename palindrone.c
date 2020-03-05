////string is palaindrone

#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int l,r;
    printf("\nEnter a string:");
    scanf("%s",&s);
    r=strlen(s)-1;
    l=0;
    for(l=0,r=strlen(s)-1;l<=r;l++,r--)
    {
        if (s[l]!=s[r])     //// not a palindrone
        {
            printf("\nNot a palindrone");
            break;
        }
    }
    if(l>r)
    {
        printf("\npalindrone");
    }
    return 0;
}