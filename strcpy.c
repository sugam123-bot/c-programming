//WAP in c that illustrate the use of strcpy() functiona
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	printf("Chet Prasad Mainali\n");
	char x[]= "Happy New Year 2083!!";
	char y[20];
	printf("Orginal string: %s\n",x);
	strcpy(y,x);
	printf("Copied string:%s\n", y);
	return 0;
	
}
