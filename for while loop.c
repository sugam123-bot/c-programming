// Write a program to display even numbers using for, while, and do while loop. Wven numbers up to hundred
#include <stdio.h>
int main(){
	int i;
	// using for loop
	printf("Enter Numbers Upto 100:\n");
	printf("\nWhile using for loop:\n");
	for(i=0; i<=100; i=i+2)
		printf("%d\t", i);
	// using while loop
	printf("\nWhile using while loop:\n");
	
 i=0;
	while(i<=100){
		printf("%d\t", i);
		i=i+2;
	}
		//using do while
		
		printf("\nWhile usng do while loop:\n");
		i=0;
		do{ 	printf("%d\t", i);
		i=i+2;
		
		
		}
			while(i<=100);
		
		
		
		
		
		
	return 0;
}
