///// mango eat ---me   aa                      eat mango -- em    aa
    ////////            nt                                         tn
               //////   g*                                         *g
                     // o*                                         *o
#include<string.h>
int main()
{
    char s1[100],s2[100];
    int l1,l2;
    scanf("%s",s1);
    scanf("%s",s2);
    l1=strlen(s1);
    l2=strlen(s2);
    if(l1==l2)
    {
        for(int i=0;i<l1;i++)
        printf("\n%c%c",s1[i],s2[i]);
    }
    else if(l1>l2)
    {int i;
        for( i=0;i<l2;i++)
        printf("\n%c%c",s1[i],s2[i]); 
        for(;i<l1;i++)
        printf("\n%c*",s1[i]);
    }
    else
    {int i;
        for( i=0;i<l1;i++)
        printf("\n%c%c",s1[i],s2[i]); 
        for(;i<l2;i++)
        printf("\n%c*",s1[i]);
    }
    return 0;
}
                  
                  