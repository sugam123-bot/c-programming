// WAP in c that calculate n natural number by using recursive function
#include<stdio.h>
long int add (int);
int main(){
	int a;
	//long b;
	printf("Enter the natural number:\n");
	scanf("%d", &a);
	printf("The sum of %d natural number is %ld", a, add(a));
	return 0;
	
	}
	long add(int a)
	{
		if(a==0)
		return 0;
		else 
		return (a + add(a-1));
	}
	
