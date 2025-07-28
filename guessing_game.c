#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	printf("Chet Prasad Mainali\n");
	int random, guess, no_of_guess;
	srand(time(NULL));
	printf("Welcome to the world of guessing number.\n");
	random = rand()%100+1;
	do{
		printf("Enter your guesses number from 1 to 100:\n");
		scanf("%d", &guess);
		no_of_guess++;
		if(random>guess){
			printf("Guess larger number\n");
		}
		else if(random<guess){
			printf("Guess smaller number\n");
		}
		else if(random=guess){
			printf("Congrulations!! your guesses is correct in %d attemps", no_of_guess);
		}
	
	
	
}while(guess!=random);
return 0;

}
