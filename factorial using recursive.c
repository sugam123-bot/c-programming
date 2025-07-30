//WAP that finds the factorial of a number using recursive function
#include<stdio.h>
int factorial(int x);
int main(){
	int x, y;
	
	printf("Chet Prasad Mainali");
	printf("\nEnter the number of x:");
	scanf("%d", &x );
    y= factorial(x);
	printf("The factorial of %d is %d", x, y);
	return 0;
	
	
}
int factorial(int x){
	int y;
	if(x==1){


		return 1;	}
		
	 else 
	 return (x*factorial(x-1));
}
