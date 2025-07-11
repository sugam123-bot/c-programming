// W a menu-driven program to input a 3*3 matrix and display the menu 
//1 print the input matrix
//2 print the sum of even element
//3 sum of all diagonal
//4 exit
#include<stdio.h>
#define r 3
#define c 3
int A[r][c], i, j, sum, add=0;
int main(){
	printf("Enter the element of a matrix:");
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			scanf("%d", &A[i][j]);
		}
	}
		
	

	for(i=0; i<r; i++){
		for(j=0; j<c; j++)
{
	printf("%d\t", A[i][j]);
	
	}
	printf("\n");	}
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			if(A[i][j]/2==0 ){
				sum += A[i][j];
				printf("The sum of even element is %d\n", sum);
			}
		}
	}
for(i=0; i<r && i<c; i++){
	add += A[i][j];
	printf("%d", add);
}

	return 0;
}
