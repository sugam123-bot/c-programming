//WAP to illustrate the function with no arguments and  return type
#include<stdio.h>
int sum();
int main(){
	int sum, a, b;
	sum = addition(a,b);
	printf("The sum of two number is %d\n", sum);
	printf("It is the function with no arguments with return type.");
	
}
int addition(int d, int e){
	int s;
	printf("Enter two number:\n");
	scanf("%d%d", &d, &e);
	s = d+e;
	return s;
}
