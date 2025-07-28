#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int random;
	srand(time(NULL));
	random = rand();
	printf("The random number is %d", random);
}
