#include<stdio.h>
int main(){
	int i, j, r, c, d=1, div[100][100], mat[100][100];
	printf("Enter the number of rows and colums of a matrix:\n");
	scanf("%d%d", &r, &c);
	printf("Enter the elements of a matrix:\n");
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
		scanf("%d", &mat[i][j]);	
		}
	}
	printf("Enter the number which you want to divide a matrix:\n");
	scanf("%d", &d);
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			div[i][j] = mat[i][j] / d;
		}
	}
	printf("The elements of a matrix after divide is\n");
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			printf("%d\t", div[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
