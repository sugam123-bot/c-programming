//WAP that count your length of string by using strlen
#include<stdio.h>
#include<string.h>
int main(){
	char name[50];
	int length=0;
	printf("Chet Prasad Mainali\n");
	printf("Enter your context:\n");
	scanf("%s", name);
	length = strlen(name);
	printf("The length of your text is %d character(s)", length);
	return 0;
}
