#include<stdio.h>// WAp to calculate the multiplication of two matrix.
int main(){
	int k,  i, j, r1, r2,c1, c2, mat[100][100], mat1[100][100], mul[100][100];
	printf("Enter the number of rows and colums in matrix:\n");
	scanf("%d%d", &r1, &c1);

		printf("Enter the number of rows and colums in matrix1:\n");
	scanf("%d%d", &r2, &c2);
if(c1!=r2){
	printf("The given matrix cannot be multiply");
return 1;
}
	
		printf("Enter the elements of a matrix:\n");
	for (i=0; i<r1; i++){
		for(j=0; j<c1; j++){
		scanf("%d", &mat[i][j]);
		}
	}
	
	
		printf("Enter the elements of a matrix1:\n");
	for (i=0; i<r2; i++){
		for(j=0; j<c2; j++){
		scanf("%d", &mat1[i][j]);
		}
	}
	if (c1==r2){
		for(i=0; i<r1; i++){
			for (j=0; j<c2; j++){
				for(k=0; k<c1; k++){
			
				mul[i][j] += mat[i][k] * mat1[k][j];
					}
			}
		}
	}
	for(i=0; i<r1; i++){
			for (j=0; j<c2; j++){
				printf("%d\t", mul[i][j]);
			}
			printf("\n");
		}
	
	
	return 0;
}
