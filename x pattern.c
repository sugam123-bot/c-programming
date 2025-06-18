#include <stdio.h>
int main(){
	int i, j, n;
	printf("Enter number of row you want to print:\n");
	scanf("%d", &n);
	for (i=0; i<n; i++){
		for (j=0; j<n; j++){
			if (i==j|| j == n-1-i){
				printf("*");
			}
			else{
					printf(" ");
			}
		
			
		}
		printf("\n");
	}
	return 0;
}
