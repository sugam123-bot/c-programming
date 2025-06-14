// WAP to accept your name from keyboard and display as HEllo! Your name
#include<stdio.h>
int main(){
	char name[20];
	printf("Enter your name:\n");
	scanf("%s", name);
	printf("Hello! %s", &name);// only print the first word before white space
	
	
	return 0;
}
