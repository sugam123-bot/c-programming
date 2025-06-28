//PROGRAM TO READ YOUR NAME FROM KEYBOARD AND OUTPUT A LIST OF ASCII CODES THAT REPRESENT YOUR NAME
#include<stdio.h>
#include<string.h>
int main(){
	int length, i;
	char name[50];
	printf("Chet Prasad Mainali\n");
	printf("Enter your name:\n");
	scanf("%s", name);
	length = strlen(name);
	printf("The ASCII value of the characters in the name %s are:\n", name);
	for(i=0; i<length; i++){
		printf("%c=%d\n", name[i], name[i]);
	}
	
	return 0;
}
