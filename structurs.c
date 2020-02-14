#include<stdio.h>
struct student{
    int roll;
    int tot;
    char name[50];
    char crs[20];
};
int main(){
    struct student s;
    printf("\nroll:");scanf("%d",&s.roll);
    printf("\nname:");scanf("%s",&s.name);
    printf("\ntot:");scanf("%d",&s.tot);
    printf("\ncrs:");scanf("%s",&s.crs);
    printf("\nroll: %d",s.roll);
    printf("\ntot: %d",s.tot);
    printf("\ncrs: %s",s.crs);
    printf("\nname: %s",s.name);
    return 0;
}