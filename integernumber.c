// write a program to read an integer number n from keyboard and display the message "get well soon" n times
#include <stdio.h>
int main(){
	int i, n;
	
	printf("Enter the integer number:\n");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		printf("Get Well Soon\n");
	}
	
return 0;	
}
