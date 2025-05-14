#include <stdio.h>
int firstNumber, secondNumber, thirdNumber, add, sub, mul, div, mod;
int main(){
	printf("Enter the firstNumber:");
	scanf("%d", &firstNumber);
	printf("Enter the secondNumber:");
	scanf("%d", &secondNumber);
	printf("Enter the thirdNumber");
	scanf("%d", &thirdNumber);
	add = firstNumber + secondNumber + thirdNumber;
	sub = firstNumber - secondNumber - thirdNumber;
	mul = firstNumber * secondNumber * thirdNumber;
	div = firstNumber / secondNumber / thirdNumber;
	mod = firstNumber % secondNumber % thirdNumber;
	printf("The sum of three number is %d\n", add);
	printf("Ths sub of three number is %d\n", sub);
	printf("The mul of three number is %d\n", mul);
	printf("The div of three number is %d\n", div);
	printf("The mod of three number is %d\n", mod);
	return 0;
  }
