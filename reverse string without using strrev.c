//WAP in c that reverse the content of strings without using strrev() functions
#include<stdio.h>
int main(){
	char string[25], string_reverse[25];
	int length, i, j;
	printf("Chet Prasad Mainali\n");
	printf("Enter the string to be reversed:\n");
	scanf("%s", string);
	length = strlen(string);
	for (j=0, i=length-1; j<length; j++, i--)

		string_reverse[j]= string[i];
		string_reverse[j]='\0';
	
	printf("%s",string_reverse);	
	return 0;
}
