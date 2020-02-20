//string sorting.
#include <stdio.h>
#include<string.h>
int main()
{
    char s[5][50];
    int i;
    printf("\n enter 5 names :\n");
    for(i=0;i<5;i++)
        scanf("%s",s[i]);
    for(i=0;i<4;i++)
    {
        for(int j=4;j>i;j--)
        {
            if(strcmp(s[j],s[j-1]) < 0)
            {
                char t[50];
                strcpy(t,s[j]);
                strcpy(s[j],s[j-1]);
                strcpy(s[j-1],t);
            }
        }
    }
    printf("\n all the names are :\n");
    for(i=0;i<5;i++)
        printf("\n%s",s[i]);

    return 0;
}
