#include<stdio.h>
int main()
{
    int sum_arr(int[]);
    int arr[5]={4,5,6,7,8};
    printf("\n%d",sum_arr(arr));
    return 0;
}
int sum_arr(int a[])
{
    int s=0;
    for(i=0;i<s;i++)
    s=s+a[i];
    return s;
}