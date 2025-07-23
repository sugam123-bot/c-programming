//pointer
#include<stdio.h>
int main(){
	int a, b, *p1, *p2;
	printf("Enter the value of a:\n");
	scanf("%d", &a);
	printf("Enter the value of b:\n");
	scanf("%d", &b);
	p1=&a;
	p2=&b;
	printf("%d is in address of %u\n", *(p1), p1);
	printf("%d is in address of %u\n", *(p2), p2);
	printf("%d is in address of %u\n", a, &a);
	printf("%d is in address of %u\n", b, &b);
	return 0;
}
