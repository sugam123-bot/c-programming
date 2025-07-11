// Program to find the combination of two numbers i.e. c(n,r)
#include<stdio.h>
long factorial(int n)
{
	int i; 
	long fact=1;
	for (i=1; i<=n; i++){
		fact *= i;
	}
	return fact;
}
int main(){
	long f1=1, f2=1, f3=1, comb;
	int n, r;
	printf("\nEnter n and r:");
	scanf("%d%d", &n, &r);
	f1=factorial(n);
	f2=factorial(n-r);
	f3=factorial(r);
	comb = f1/(f2*f3);
	printf("\n The combination is: %ld", comb);
	return 0;
}
