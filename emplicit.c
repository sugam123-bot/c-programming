// write a program that reflect emplicit function conversion
#include<stdio.h>
int main(){
	int a, b;
	float div;
	//getting user input
	printf("Enter the first number:\n");
	scanf("%d", &a);
	printf("Enter the second number:\n");
	scanf("%d", &b);
	
	// calculation
	div = (float)a / b;
	//result
	printf("The divide of two number is %f", div);
	return 0;
}
