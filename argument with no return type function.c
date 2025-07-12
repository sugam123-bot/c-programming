//WAP to illustrate the function with arguments and no return type
#include<stdio.h>
int sum();
int main(){
	int a, b, c;
	printf("Enter two number:\n");
	scanf("%d%d", &a, &b);
		sum(a, b);
	printf("It is the function with arguments and no return type.");

	return 0;
}
int sum(int d, int e){
	int sum; 
		sum = d+e;
	printf("The sum of two number is %d\n", sum);
	
}
