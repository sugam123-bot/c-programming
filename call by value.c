//Program to illustrate call by value
#include<stdio.h>
void swap(int , int);
void main(){
	int a, b;
	a=99; b=89;
	printf("Chet prasad Mainali\n");
	printf("\nBefore function calling, a and b are: %d\t %d", a, b);
	swap(a,b);
	printf("\n After function calling, a and b are: %d\t %d\n", a, b);

}
void swap (int x, int y){
	int temp;
	temp = x;
	x=y;
	y= temp;
	printf("\nThe values within functions are: %d\t and %d\n", x, y);
}
