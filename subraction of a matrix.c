#include<stdio.h>
int main(){
	int i, j, r1,c1, r2,c2, mat[100][100], mat1[100][100], sub =0;
	printf("Enter the number of rows and colums of a matrix:\n");
	scanf("%d%d", &r1, &c1);
	printf("Enter the number of rows and colums of a matrix 1:\n");
	scanf("%d%d", &r2, &c2);
	if(r1==r2 && c1==c2){

	printf("Enter the elements of a matrix:\n");
     for(i=0; i<r1; i++){
     	for(j=0; j<c1; j++){
     		scanf("%d", &mat[i][j]);
		 }
	 }
	 printf("Enter the elements of a matrix 1:\n");
     for(i=0; i<r1; i++){
     	for(j=0; j<c1; j++){
     		scanf("%d", &mat1[i][j]);
		 }
	 }
	for(i=0; i<r1; i++){
     	for(j=0; j<c1; j++){
     	sub = mat[i][j] - mat1[i][j];
		 }
	 }
	 printf("The subraction of two matrix is\n ");
	 for(i=0; i<r1; i++){
     	for(j=0; j<c1; j++){
     	printf("%d\t", sub);
		 }
		 printf("\n");
	 }
}
	else {printf("The given matrixes cannot subract");
	}
	
		
	return 0;
}
