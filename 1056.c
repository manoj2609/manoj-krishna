////// 1056=6501
/// 1*
/// 1
/// 1*****
/// 1******


#include<stdio.h>
    int reverse(int n)
    {
        int rev=0;
        while(n!=0)
        {
            rev=(rev*10)+(n%10);
            n=n/10;
        }
        return rev;
    }
    void main()
    {
        int n,r;
        scanf("%d",&n);
        r=reverse(n);
        while(r!=0)
        {
            int x=r%10;
            for(int i=0;i<x;i++)
            printf("*");
            printf("\n");
            r=r/10;
        }
    }
        
        
        
        