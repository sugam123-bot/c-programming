#include <stdio.h>
int main(){
	long long mobilenumber;
	int sum;
	printf("Enter your mobile number:\n");
	scanf("%lld", &mobilenumber);
	while (mobilenumber !=0)
{sum += mobilenumber %10;
	mobilenumber /=10; }
	
	printf("The sum of your mobile number is %d", sum);	
	
	
	
	
	return 0;
	
}
