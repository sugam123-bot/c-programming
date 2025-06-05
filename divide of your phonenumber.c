/*#include <stdio.h>
int main (){
	long long phoneNumber;
	float div=1;
	printf("Enter your phone number:\n");
	scanf("%lld", &phoneNumber);
	while (phoneNumber !=0){
		div /= phoneNumber % 10;
		if (phoneNumber !=0){
			div /=phoneNumber;
		}else {
			printf("Warning: Skippinf division by zero digit.\n");
			return 1;
		}
		phoneNumber /=10;	}
		printf("The divide of your phone number is %f", div);
		return 0;
}
*/
#include <stdio.h>

int main () {
    long long phoneNumber;
    float div = 1.0;
    int i, digit;
for (i=0; i>=0; i++){

    printf("Enter your phone number:\n");
    scanf("%lld", &phoneNumber);

    while (phoneNumber != 0) {
        digit = phoneNumber % 10;

        if (digit != 0) {
            div /= digit;
        } else {
            printf("Warning: Skipping division by zero digit.\n");
        }

        phoneNumber /= 10;
    
}
    printf("The result of dividing 1.0 by each non-zero digit of your phone number is: %.10f\n", div);
   } 
    return 0;
}




