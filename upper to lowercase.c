//WAP in c that comver the uppercase to lowercase using library function
#include<stdio.h>
#include<string.h>
int main(){
	char string[100];
	printf("Chet Prasad Mainali\n");
	printf("Enter the string:\n");
	gets(string);
	strlwr(string);
	printf("String after strlwr:%s\n", string);
	return 0;
}
