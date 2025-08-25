//WAP in c to read line of text from the keyboard(until the enter key) and count the number of vowels, consonants, digits, commas and semicolons in the string
#include<stdio.h>
#include<conio.h>
int main(){
	char str[30];
	int i=0,v=0, c=0, d=0, cc=0, semi=0, s=0;
	printf("Enter the string:\n");
	scanf("%[^\n]", str);
	while (str[i]!='\0'){
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
			v++;
		}
	
		 else if(str[i]==','){
		    cc++;
		}
		else if(str[i]==';'){
		    semi++;
		}
		else if(str[i]>='0'&& str[i]<='9'){
		    d++;
		}
		else if(str[i]==' '){
		    s++;
		}
			else c++;
		i++;
	}
	printf("Numbers of vowels =%d\n", v);
	printf("Numbers of consonants = %d\n", c);
	printf("Number of commas in string = %d\n", cc);
	printf("Number of semicolons in string = %d\n", semi);
	printf("number of digits in string = %d\n",d);
	printf("Number of space in string = %d\n", s);
	
	return 0;
}
