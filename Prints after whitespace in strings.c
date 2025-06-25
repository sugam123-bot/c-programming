// WAP that prints after whitespace
#include<stdio.h>
int main(){
	char name[100];
	printf("Chet Prasad Mainali\n");
	printf("Enter any two words:\n");
	scanf("%[^\n]", name);// %[^\n] prints the things after the whitespace
	printf("%s", name);
	return 0;
}
