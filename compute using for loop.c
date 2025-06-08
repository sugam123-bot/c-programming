//wap compute 1^2 + 2^2 + 3^2 +......+ n^2 using for loop (Take n from user.)
#include <stdio.h>
int main(){
	 int i, j, sum, n;
	 for (j=0; j>=0; j++){

	 printf("Enter the number:\n");
	 scanf("%d", &n);
	 
	 for (i=1; i<=n; i++){
	 	sum = 0;
	 	sum += i*i;
	 }
	 printf("The sum of square of 1 to %d is %d\n", n, sum);
	 	 }
	return 0;
}
