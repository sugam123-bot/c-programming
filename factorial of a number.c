//Write a program to calculate the factorial of a number using for loop
#include <stdio.h>
int main(){
	int i, a, b;
	 unsigned long long c=1;
	 for (i=0; i>=0; i++){
	
	printf("Enter the factorial number:\n");
	scanf("%d", &a);
	if (a < 0){
		  printf("Factorial is not defined for negative numbers.\n");
        return 1; 
		// Exit program early
	}
		c=1;
	for (b=1; b<=a; ++b) {
	
		c *= b;
	
		
	}
		printf("The factorial of %d is %llu\n", a, c);
		 }
	return 0;
}
