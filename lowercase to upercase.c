//WAP in c that conver the lowercase number to uppercase using library function
#include<stdio.h>
#include<string.h>
int main(){
	char string[100];
	printf("Chet Prasad Mainali\n");
	printf("Enter string:\n");
	gets(string);
	strupr(string);
	printf("String after strupr:%s\n", string);
	return 0;
}
