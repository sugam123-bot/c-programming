//WAP to illustrate the function with arguments and return type
#include<stdio.h>
int sum();
int main(){
	int a, b,sum, c;
	printf("Enter two number:\n");
	scanf("%d%d", &a, &b);
	sum = addition(a, b);
	printf("The sum of two number is %d\n", sum);
	printf("It is a function with arguments and return type.");
	return 0;
}
int addition(int d, int e){
	int sum;
	sum = d+e;
	return sum;
}
