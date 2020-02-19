/// count the no of alphabets in a given string

#include<stdio.h>
int main()
{
    char sent[200];
    int i;
    int cnt[26]={0};
    printf("\nEnter a sentence:\n");
    gets(sent);
    for(i=0;sent[i]!='\0';i++)
    {
        if (sent[i]>='a' && sent[i]<='z')
        sent[i]=sent[i]-32;
        if(sent[i]>='A' && sent[i]<='Z')
        cnt[sent[i]-65]++;
    }
    printf("\nAll the charcter occerances are :\n");
    for(i=0;i<26;i++)
    if(cnt[i]>0)
    printf("\Alphabet %c occer %d times.",i+65,cnt[i]);
    return 0;
    
}