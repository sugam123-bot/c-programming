//counting the length of the string
#include<stdio.h>
#include<conio.h>
void main(){
	puts("Chet Prasad Mainali");
	char input_string[50];
	int i=0, length=0;
	puts("\nEnter your text:\t");
	gets(input_string);
	while(input_string[i]!='\0'){
		length++;
		i++;
	}
	printf("\nThe length of your text is %d character(s)", length);
	getch();
}
