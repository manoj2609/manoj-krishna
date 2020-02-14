#include<stdio.h>
int main()
{
    char str[50];
    int i;
    int cnt;
    printf("\nenter your name:");
    scanf("%[^\n]s",str);
    for(i=0, cnt=0; str[i]!= '\0' ;i++)
    if(str[i]==' ' && str[i+1]!= ' ')
    cnt++;
    printf("\nNumber of words: %d",cnt+1);
    return 0;
}