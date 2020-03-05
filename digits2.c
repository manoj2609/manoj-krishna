//// digits to words.....

#include<stdio.h>
int main()
{
	int a[100],n=0,i;
	long x;
	scanf("%ld",&x);
	while(x!=0){
		a[n] = x % 10;
		x /= 10;
		n++;
	}
	for(i=n-1;i>=0;i--){
		switch(a[i]){
			case 0 : printf("Zero ");
			break;
			case 1 : printf("One ");
			break;
			case 2 : printf("Two ");
			break;
			case 3 : printf("Three ");
			break;
			case 4 : printf("Four ");
			break;
			case 5 : printf("Five ");
			break;
			case 6 : printf("Six ");
			break;
			case 7 : printf("Seven ");
			break;
			case 8 : printf("Eight ");
			break;
			case 9 : printf("Nine ");
			break;
		}
	}
	return 0;
}