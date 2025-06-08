// Write a program that use get char and put char. Explain with example.
#include <stdio.h>
int main(){
	
char name[30];
	
	printf("Chet Prasad Mainali\n");
	
	printf("Enter your phone number:\n");
	getchar(name);
	
	printf("Your phone number is:\t");
	putchar(name);
	
	return 0;
}
