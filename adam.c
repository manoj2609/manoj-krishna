////adam number...........
#include<stdio.h>
int main()
{
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
        int n;
        scanf("%d",&n);
        if(reverse(n*n)==(reverse(n)*reverse(n)))
        printf("adam number");
        else
        printf("not an adam number");
    }
}