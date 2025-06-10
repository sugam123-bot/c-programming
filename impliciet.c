// write a program of implict function
#include <stdio.h>
int main(){
	int a;
	float sum, b;
	printf("Enter the first number:\n");
	scanf("%d", &a);
	printf("Enter the second number:\n");
	scanf("%f", &b);
	// calculation
	sum = a + b;
	// result
	printf("The sum of two number is %f\n", sum);
	return 0;
}
