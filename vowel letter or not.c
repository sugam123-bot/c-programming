// WAP in c which tells user weather that is vowel letter or not
#include <stdio.h>
int main(){
	char  letter ;
	int isLowerCaseVowel, isUpperCaseVowel;
	

	printf("Enter the letter from Aa-Zz\n");
	scanf("%c", &letter);
	//return true is something is available
	isLowerCaseVowel = ( letter == 'a' || letter ==' e'|| letter =="i"|| letter == 'o'|| letter =='u');
	isUpperCaseVowel = (letter =='A'|| letter == "E"|| letter =="I"|| letter =='O'|| letter =='U');
	 if (isLowerCaseVowel || isUpperCaseVowel){
		printf("The entered letter is vowel letter\n");
	} else {printf("The entered letter is not vowel letter\n");
	}
		
	return 0;
}
