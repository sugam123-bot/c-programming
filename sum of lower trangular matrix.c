#include<stdio.h>
int main(){
	int r, c, i, j, mat[100][100], sum;
	printf("Enter the number of rows and colums of a matrix:\n");
	scanf("%d%d", &r, &c);
	printf("Enter the elements of a matrix:\n");
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			scanf("%d", &mat[i][j]);
		}
	}
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			if (i>=j){
				sum += mat[i][j];
			}
		}
	}
	printf("The sum of lower trangular matrix is %d", sum);
	return 0;
}
