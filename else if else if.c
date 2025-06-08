// WAP in c which run calculate the greater number in three different number.
#include <stdio.h>
int main(){
	int num1, num2, num3, i;
	for (i=0; i>=0; i++){

	printf("Enter any number:\n");
	scanf("%d %d %d", &num1 ,&num2, &num3);
	
	if (num1>num2 && num1>num3){
		printf("num1 one is greater then other\n");
	} else if (num2>num1 && num2> num3){
		printf("num2 is greater then other\n");
	}
	else {printf("num3 is greater then other\n");
	}
		}
	return 0;
}
