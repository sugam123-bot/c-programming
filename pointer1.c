//WAP to illustrating use of pointers
#include<stdio.h>
int main(){
	int a=10, *p=&a;
	printf("Chet Prasad Mainali");
	printf("\nThe value of a is %d", a);
	printf("\nThe address of a is %d", &a);
	printf("\nThe address of a (value of p or address pointed by p) is %d\n", p);
	printf("The value of a pointed by p is %d\n", *p);
	printf("The address of p is %d", &p);
	
}
