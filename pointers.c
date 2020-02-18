#include<stdio.h>
int main()
{
  int n= 8;
  int *p;
  p= &n;
  printf("\n%d",&n);
  printf("\n%d",*p);    /// value of n in the p memory location =8
  printf("\n%u",&n);
  printf("\n%u",p);     /// memory address
  printf("\n%d", *(&n));      
  return 0;  
}
