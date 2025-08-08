//WAP to swap two numbers using call by address method
#include<stdio.h>
#include<conio.h>
void swap(int*, int*);
int main(){
	int a, b;
	printf("Chet Prasad Mainali\n");
	printf("Enter any two numbers:\n");
	scanf("%d%d", &a, &b);
	printf("Before swap a=%d, b=%d\n", a,b);
	swap(&a, &b);
	printf("After swap: a=%d and b=%d\n", a, b);
	return 0;
}
 void swap(int *x, int *y){
	int temp;
	temp = *x;
	*x= *y;
	*y= temp;
	printf("x=%d and y=%d\n", *x, *y);
}
