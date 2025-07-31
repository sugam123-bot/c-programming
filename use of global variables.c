//WAP to demonstrate the uses of external or global variables
#include<stdio.h>
int sum();
int product();
int a, b, c;
	printf("Enter the value of three number:\n");
scanf("%d%d%d", &a, &b, &c);

int main(){
	printf("Chet Prasad Mainali\n");

printf("three number are:%d\t%d\t%d\n", a,b,c);
	printf("\nThe sum of three number is %d.\n", sum());
	printf("The product of three number is %d.\n", product());
	return 0;
}
int sum(){
	return (a+b+c);
}
int product(){
	return (a*b*c);
}
