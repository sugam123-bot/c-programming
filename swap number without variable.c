// WAAP that swap a number without using anyother integer
#include<stdio.h>
int main(){
	int a, b;
	printf("Enter the value of a:\n");
	scanf("%d", &a);
	printf("Enter the value of b:\n");
	scanf("%d", &b);
	printf("a = %d and b = %d\n", a, b);
	a = a+b;
	b = a-b;
	a = a-b;
	
	printf("The swap value of a is %d\n", a);
	printf("The swap value of b is %d", b);
	
	return 0;
}
