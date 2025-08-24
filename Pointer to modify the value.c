//WAP in c that uses a pointer to modify the value of a normal integer variable
#include<stdio.h>
int main(){
	int a;
	printf("Enter the value of a:\n");
	scanf("%d", &a);
	int *p=&a;
	printf("Enter the value you want to change:\n");
	scanf("%d", &*p);
	printf("The changed value is %d", a);
	return 0;
}
