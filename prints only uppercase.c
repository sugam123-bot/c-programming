//WAP that only take a uppercase from eneter value in array
#include<stdio.h>
int main(){
	char alpha[26];
	printf("Chet Prasad Mainlai");
	printf("Enter your name in uppercase:\n");
	scanf("%[A-Z]", alpha);//"Read only uppercase letters from A to Z and stop reading immediately when any non-uppercase character is found."
	printf("Your name is %s", alpha);
	return 0;
}

