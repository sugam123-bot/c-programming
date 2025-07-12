//WAP to illustrate the function with no arguments and no return type
#include<stdio.h>
int sum();
int main(){
	sum();
	printf("It is a function with no arguments and no return type value.");
	return 0;
}
int sum(){
	int a, b, c;
	printf("\nEnter two number:\n");
		scanf("%d%d", &a, &b);
		c = a + b;
		printf("The sum of two number is %d\n", c);
}
