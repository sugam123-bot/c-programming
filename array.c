#include <stdio.h>
int main (){
	int n = 6;
	float price[n];
	int i=0;
	
	for (i=0; i<n; i++){
		
	printf("Enter the price of a goods %d\n", i+1);
	scanf("%f", &price[i]);
	
		}
		for (i=0; i<n; i++){
			printf("The price %d is %f\n", i+1, price[i]);
		}
	
	return 0;
}
