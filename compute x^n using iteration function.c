// WAP to compute a x^n using iteration function
#include<stdio.h>
long double power(int, int);
int main(){
	int a, b;
	long p;
	printf("Chet Prasad Mainali\n");
	printf("Enter the value of number and power of it:");
	scanf("%d%d", &a,  &b);
	p= power(a, b);
	printf("The answer of %d^%d is %ld", a, b, p);
	return 0; 
}
long double power(int a, int b)
{

	int power= 1.0;
	int i;

   for (i=1; i<=b; i++)
	power *= a;
	return power;

}
