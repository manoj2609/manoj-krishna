#include<stdio.h>
int main()
{
 int i;
 char name[50];
 printf("\nenter your name:");
 scanf("%s",name);
 for(i=0;name[i]!='0';i++)
 printf("\n %c",name[i]);  
 return 0;
}    
