//WAP that express the use of pointer in arthmetic expressions.
#include<stdio.h>
int main(){
	int a, b, *s1, *s2, x, y, z;
	printf("Enter the value of a:\n");
	scanf("%d", &a);
	printf("Enter the value of b:\n");
	scanf("%d", &b);
	s1=&a;
	s2=&b;
		x = *s1 + *s2 * *s2/3;
	printf("x=%d", x);
		return 0;
}
