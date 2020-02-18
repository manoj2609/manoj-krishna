//// pointers
#include<stdio.h>
int main(){
	int x,*ptr;
	x = 10;
	ptr = &x;
	printf("\n Value x = %d",x);
	printf("\n Address of x = %u",&x);
	printf("\n Value of Ptr = %d",*ptr);
	printf("\n Address of ptr = %u",&ptr);
	printf("\n Internal Storage = %u",ptr);
	return 0;
}
////////
In [ ]:
#include<stdio.h>
int main(){
	int x,*ptr;
	x = 10;
	ptr = &x;
	x += 100;
	printf("%d",*ptr);
	return 0;
}
///////
In [ ]:
#include<stdio.h>
void fun1(int x,int y){
	printf("\n initial values of x and y");
	printf("\n x = %d \t y = %d",x,y);
	x += 10;
	y += 10;
	printf("\n After Modification ");
	printf("\n x = %d \t y = %d",x,y);
}
int main(){
	int a,b;
	printf("\n Enter two values ");
	scanf("%d%d",&a,&b);
	printf("\n Values of a and b : ");
	printf("\n a = %d \t b = %d",a,b);
	fun1(a,b);
	printf("\n after the function call ");
	printf("\n a = %d \t b = %d",a,b);
	return 0;
}
// Actual Parameters -- a and b
// Formal Paramters  -- x and y
// In this call by value formal parameters
// will not reflect back to actual parameters
In [ ]:
#include<stdio.h>
void fun1(int *x,int *y){
	printf("\n Initial values of x and y ");
	printf("\n x = %d \t y = %d",*x,*y);
	*x = *x + 1;
	*y = *y + 1;
	printf("\n After Modification");
	printf("\n x = %d \t y = %d",*x,*y);
}
int main(){
	int a,b;
	printf("\n Enter two values : ");
	scanf("%d%d",&a,&b);
	printf("\n Before Function Call ");
	printf("\n a = %d \t b = %d",a,b);
	fun1(&a,&b);
	printf("\n After the Function Call ");
	printf("\n a = %d \t b = %d",a,b);
	return 0;
}
//Formal Parameters are reflected back to actual parameters
In [ ]:
#include<stdio.h>
int returnSum(int a){
	int sum = 0;
	while(a!=0){
		sum = sum + (a%10);
		a /= 10;
	}
	if(sum<=9){
		return sum;
	}
	else{
		returnSum(sum);//Self Calling - Function Recursion
	}
}
int main(){
	int x;
	scanf("%d",&x);
	printf("%d",returnSum(x));
	return 0;
}
In [ ]:
#include<stdio.h>
#include<stdlib.h>
struct Demo{
	char name[100];
	int id;
	float marks;
};
int main(){
	struct Demo obj;
	printf("\n Enter the Name : ");
	scanf("%s",obj.name);
	fflush(stdin);
	printf("\n Enter the Id ");
	scanf("%d",&obj.id);	
	printf("\n Enter the Marks ");
	scanf("%f",&obj.marks);
	printf("\n ----------------- \n");
	printf("\n Id = %d Name = %s Marks = %.2f",obj.id,obj.name,obj.marks);
	return 0;
}
In [ ]:
#include<stdio.h>
#include<stdlib.h>
struct Demo{
	char name[100];
	int id;
	float marks;
};
int main(){
	struct Demo obj[100];
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("\n Enter the Name : ");
		scanf("%s",obj[i].name);
		printf("\n Enter the Id : ");
		scanf("%d",&obj[i].id);
		printf("\n Enter the Marks : ");
		scanf("%f",&obj[i].marks);
	}
	
	printf("\n ----------------- \n");
	for(i=0;i<n;i++){
		printf("\n Id = %d Name = %s Marks = %.2f",obj[i].id,obj[i].name,obj[i].marks);	
	}
	
	return 0;
}