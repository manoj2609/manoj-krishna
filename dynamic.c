/// dynamic memory allocation
/// malloc()
/// free()   HEDDER file used stdlib.h
// create dynamic array and use it.

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,size,i;
    printf("\nHow many elements do you need?");
    scanf("%d",&size);
    p= (int*)malloc(size * sizeof(int));
    printf("\nEnter %d numbers:\n",size);
    for(i=0;i<size;i++)
    scanf("%d",&p[i]);
    printf("\nAll %d numbers are:\n",size);
    for(i=0;i<size;i++)
    printf("%d\n",p[i]);
    return 0;
}