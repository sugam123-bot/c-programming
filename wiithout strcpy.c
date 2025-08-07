//WAP in c that copy the content of one string without using strcpy()
#include<stdio.h>
int main(){
	char copy[30], paste[30];
	int i;
	printf("\nChet Prasad Mainali\n");
	printf("Enter your name (to copy):\t");
	gets(copy);
	for( i=0; copy[i]!='\0'; i++){
		paste[i]= copy[i];
	}
	paste[i]='\0';
	printf("\nThe name is (pasted as):\t");
	puts(paste);
	return 0;
}
