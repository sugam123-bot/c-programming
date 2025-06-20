#include <stdio.h>
int main(){
	int i, j, r, c; //mat, mat1, result;
	printf("Enter the number of rows of matrix:\n");
	scanf("%d", &r);
	printf("Enter the number of column of matrix:\n");
	scanf("%d", &c);
int	mat[100][100], mat1[100][100], result[100][100];
	
	for (i=0; i<r; i++){
		for (j=0; j<c; j++)
{	printf("Enter the element of %d*%d matrix:", i+1, j+1);
	scanf("%d", &mat[i][j]);
	}	}
		for (i=0; i<r; i++){
		for (j=0; j<c; j++)
{
	printf("Enter the element of %d*%d matrix:", i+1, j+1);
	scanf("%d", &mat1[i][j]);

	}
		}
			for (i=0; i<r; i++){
		for (j=0; j<c; j++)
{
	result [i][j] = mat[i][j] + mat1[i][j];
	

	}
		}
				for (i=0; i<r; i++){
		for (j=0; j<c; j++)
{
	printf("%d\t", result[i][j]);
	

	}
	printf("\n");
		}
	
	return 0;
}
