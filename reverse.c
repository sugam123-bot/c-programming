//write a program to reverse a number using while loop
#include <stdio.h>
int main (){
	long long numbers;
	int i, a;
	long long r=0;
	printf("Enter the number you want to reverse:\n");
	scanf("%lld", &numbers);
	
	while (numbers !=0) {
		a = numbers % 10;
		r = r *10 + a ;
		numbers = numbers /10;
	
	

	}
		printf("The reverse of your entered number is %lld", r);
	
	return 0;
}

